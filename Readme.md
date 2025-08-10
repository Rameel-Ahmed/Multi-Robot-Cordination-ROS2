🦾 Multi-Robot Coordination with YOLOv5 and SLAM
📌 Overview
This project demonstrates multi-robot coordination in a simulated environment using ROS 2, Gazebo, SLAM, and YOLOv5 object detection.
Multiple TurtleBot3 Waffle Pi robots autonomously explore and build a shared map while detecting cylindrical targets. When one robot detects a target, it communicates with others to optimize search efficiency and avoid redundant work.

Key Highlights:

Multi-robot SLAM mapping

Real-time YOLOv5 object detection

Inter-robot communication for coordination

Autonomous exploration and navigation

Task switching upon target detection

⚙️ System Architecture
Robots: Multiple TurtleBot3 Waffle Pi
Sensors:

2D LiDAR – for SLAM mapping & obstacle avoidance

Intel RealSense R200 Camera – for YOLO-based target detection

Main Components:

SLAM Node (slam_toolbox)

Coordination Manager

YOLO Detector

Exploration Node

Target Navigator

🛠️ Tech Stack
ROS 2 Humble

Gazebo Fortress

TurtleBot3 Gazebo

YOLOv5 (custom-trained)

OpenCV, Pillow

ultralytics, PyTorch

Navigation2, slam_toolbox

📂 Project Structure
bash
Copy
Edit
src/multi_robot_coordination/
│── multi_robot_coordination/
│   ├── cordination_manager.py
│   ├── smart_final_multi_yolo_detector.py
│   ├── exploration_node.py
│   ├── target_navigator.py
│   └── yolo_weights/
└── turtlebot3_gazebo/
    └── models/
🚀 How to Run the Project
Note: Replace /home/your_username/... with your actual paths.
Always run these in order: Terminal 1 → Terminal 5.

Terminal 1 — Launch Simulation
bash
Copy
Edit
cd ~/your_workspace_folder
colcon build
source install/setup.bash
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/home/your_username/path_to_ws/src/turtlebot3_gazebo/models
ros2 launch turtlebot3_gazebo final_gazebo_robot_slam.launch.py
Terminal 2 — Coordination Manager
bash
Copy
Edit
cd ~/your_workspace_folder
source install/setup.bash
python3 src/multi_robot_coordination/multi_robot_coordination/cordination_manager.py
Terminal 3 — YOLO Detector
Edit slam_final_multi_yolo_detector.py to set YOLO weights path:

python
Copy
Edit
'/home/your_username/path_to_ws/src/multi_robot_coordination/multi_robot_coordination/yolo_weights/best.pt'
Then:

bash
Copy
Edit
cd ~/your_workspace_folder
source install/setup.bash
python3 src/multi_robot_coordination/multi_robot_coordination/smart_final_multi_yolo_detector.py
Terminal 4 — Exploration Node
bash
Copy
Edit
cd ~/your_workspace_folder
source install/setup.bash
python3 src/multi_robot_coordination/multi_robot_coordination/exploration_node.py
Terminal 5 — Target Navigator
bash
Copy
Edit
cd ~/your_workspace_folder
source install/setup.bash
python3 src/multi_robot_coordination/multi_robot_coordination/target_navigator.py
🔍 Sensor Configuration & Roles
1️⃣ LiDAR
Type: 2D ray-based LiDAR (rplidar)

Mount Height: 5 cm from base

FOV: 360°

Angular Resolution: 0.5° (720 samples)

Range: 0.12 m – 3.5 m

Frequency: 10 Hz

Topic: /tb3_X/scan

Purpose: SLAM mapping & obstacle avoidance

Implementation: Defined in model.sdf and published via gazebo_ros_ray_sensor plugin

Visualization in Gazebo: Blue ring of rays indicating laser scans.

2️⃣ Camera (Intel RealSense R200)
Type: RGB camera

Topic: /tb3_X/camera/image_raw

Purpose: YOLO-based target detection

Model Path: /yolo_weights/best.pt

Implementation: Simulated via gazebo_ros_camera plugin, processed in smart_final_multi_yolo_detector.py

Output: Bounding boxes & confidence scores for detected targets

📊 LiDAR vs Camera
Feature	LiDAR	Camera (YOLO)
Purpose	Mapping, obstacle avoidance	Target detection
Data Type	Distance array	RGB image
Detection Type	Geometric only	Semantic (class ID)
ROS Topic	/tb3_X/scan	/tb3_X/camera/image_raw

🗂️ Key Files
LiDAR Definition:
src/turtlebot3_gazebo/models/turtlebot3_waffle_X/model.sdf

YOLO Detector:
src/multi_robot_coordination/multi_robot_coordination/smart_final_multi_yolo_detector.py

Coordination Logic:
cordination_manager.py

Exploration Logic:
exploration_node.py

Target Navigation:
target_navigator.py

