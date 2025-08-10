#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
from nav_msgs.msg import Path, Odometry
from geometry_msgs.msg import PoseStamped, Twist
import math
import time
import threading

class PathFollower(Node):
    def __init__(self, robot_id):
        super().__init__(f'path_follower_{robot_id}')
        self.robot_id = robot_id
        
        # Parameters
        self.lookahead_distance = 0.22
        self.speed = 0.18
        self.goal_tolerance = 0.15
        
        # Subscribers
        self.path_sub = self.create_subscription(
            Float32MultiArray,
            f'/tb3_{robot_id}/path',
            self.path_callback,
            10)
            
        self.odom_sub = self.create_subscription(
            Odometry,
            f'/tb3_{robot_id}/odom',
            self.odom_callback,
            10)
            
        # Publishers
        self.cmd_vel_pub = self.create_publisher(
            Twist,
            f'/tb3_{robot_id}/cmd_vel',
            10)
            
        self.visual_path_pub = self.create_publisher(
            Path,
            f'/tb3_{robot_id}/visual_path',
            10)
            
        # Variables
        self.path = []
        self.current_index = 0
        self.x = 0.0
        self.y = 0.0
        self.yaw = 0.0
        self.has_path = False
        
        self.get_logger().info(f'Path follower for robot {robot_id} started')

    def path_callback(self, msg):
        """Convert received path message to list of points"""
        try:
            data = msg.data
            self.path = [(data[i], data[i+1]) for i in range(0, len(data), 2)]
            self.current_index = 0
            self.has_path = True
            
            # Publish visual path
            path_msg = Path()
            path_msg.header.frame_id = "map"
            path_msg.header.stamp = self.get_clock().now().to_msg()
            
            for point in self.path:
                pose = PoseStamped()
                pose.pose.position.x = point[0]
                pose.pose.position.y = point[1]
                path_msg.poses.append(pose)
                
            self.visual_path_pub.publish(path_msg)
            
            self.get_logger().info(f'Robot {self.robot_id} received new path with {len(self.path)} points')
            
            # Start following thread
            threading.Thread(target=self.follow_path, daemon=True).start()
            
        except Exception as e:
            self.get_logger().error(f'Error processing path: {str(e)}')

    def odom_callback(self, msg):
        """Update current pose from odometry"""
        self.x = msg.pose.pose.position.x
        self.y = msg.pose.pose.position.y
        self.yaw = self.euler_from_quaternion(
            msg.pose.pose.orientation.x,
            msg.pose.pose.orientation.y,
            msg.pose.pose.orientation.z,
            msg.pose.pose.orientation.w)

    def follow_path(self):
        """Main control loop for path following"""
        twist = Twist()
        
        while self.has_path and rclpy.ok():
            # Check if we've reached the goal
            if self.current_index >= len(self.path) - 1:
                dx = self.x - self.path[-1][0]
                dy = self.y - self.path[-1][1]
                if math.hypot(dx, dy) < self.goal_tolerance:
                    twist.linear.x = 0.0
                    twist.angular.z = 0.0
                    self.cmd_vel_pub.publish(twist)
                    self.get_logger().info(f'Robot {self.robot_id} reached goal')
                    self.has_path = False
                    break
            
            # Calculate control commands
            v, w, new_index = self.pure_pursuit()
            self.current_index = new_index
            
            # Publish commands
            twist.linear.x = v
            twist.angular.z = w
            self.cmd_vel_pub.publish(twist)
            
            time.sleep(0.1)  # Control rate

    # def pure_pursuit(self):
    #     """Pure pursuit algorithm implementation"""
    #     v = self.speed
    #     w = 0.0
    #     new_index = self.current_index
        
    #     # Dynamic lookahead based on speed
    #     lookahead = max(self.lookahead_distance, abs(self.last_speed)*0.5)

    #     if len(self.path) < 2:
    #         return 0.0, 0.0, 0  # Stop if insufficient path


    #     # Find lookahead point
    #     for i in range(self.current_index, len(self.path)):
    #         point = self.path[i]
    #         dx = point[0] - self.x
    #         dy = point[1] - self.y
    #         distance = math.hypot(dx, dy)
            
    #         if distance > self.lookahead_distance:
    #             target_heading = math.atan2(dy, dx)
    #             w = self.normalize_angle(target_heading - self.yaw)
    #             new_index = i
    #             break
    #     else:
    #         # If no point found, aim for last point
    #         last_point = self.path[-1]
    #         dx = last_point[0] - self.x
    #         dy = last_point[1] - self.y
    #         target_heading = math.atan2(dy, dx)
    #         w = self.normalize_angle(target_heading - self.yaw)
    #         new_index = len(self.path) - 1
        
    #     # Reduce speed when making sharp turns
    #     if abs(w) > math.pi/6:
    #         v = 0.0
            
    #     return v, w, new_index
def pure_pursuit(self):
    """Improved pure pursuit with safety checks"""
    if len(self.path) < 2:
        return 0.0, 0.0, 0  # Stop if insufficient path

    # Dynamic lookahead based on speed
    lookahead = max(self.lookahead_distance, abs(self.last_speed)*0.5)
    
    # Find target point
    target_idx = min(self.current_index + 5, len(self.path)-1)  # Minimum 5-point lookahead
    for i in range(target_idx, len(self.path)):
        dx = self.path[i][0] - self.x
        dy = self.path[i][1] - self.y
        dist = math.hypot(dx, dy)
        if dist >= lookahead:
            target_idx = i
            break
    
    # Calculate steering
    target_x, target_y = self.path[target_idx]
    target_angle = math.atan2(target_y - self.y, target_x - self.x)
    angle_diff = self.normalize_angle(target_angle - self.yaw)
    
    # Adaptive speed control
    speed = min(self.max_speed, 0.5 * dist)  # Slow down when approaching target
    if abs(angle_diff) > math.pi/4:  # 45 degrees
        speed *= 0.5  # Reduce speed for sharp turns
        
    return speed, angle_diff, target_idx


    @staticmethod
    def euler_from_quaternion(x, y, z, w):
        """Convert quaternion to Euler angle (yaw)"""
        t3 = +2.0 * (w * z + x * y)
        t4 = +1.0 - 2.0 * (y * y + z * z)
        return math.atan2(t3, t4)

    @staticmethod
    def normalize_angle(angle):
        """Normalize angle to [-π, π]"""
        while angle > math.pi:
            angle -= 2 * math.pi
        while angle < -math.pi:
            angle += 2 * math.pi
        return angle

def main(args=None):
    rclpy.init(args=args)
    
    # Get robot ID from command line
    import sys
    if len(sys.argv) < 2:
        print("Usage: ros2 run package_name path_follower.py <robot_id>")
        return
        
    robot_id = int(sys.argv[1])
    path_follower = PathFollower(robot_id)
    
    try:
        rclpy.spin(path_follower)
    except KeyboardInterrupt:
        pass
    finally:
        path_follower.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()