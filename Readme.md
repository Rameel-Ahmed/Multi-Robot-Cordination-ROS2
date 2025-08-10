# Multi-Robot Coordination with YOLOv5 and SLAM

[![Robotics](https://img.shields.io/badge/Field-Robotics-blue?style=flat-square)](https://www.ros.org/)
[![Simulation](https://img.shields.io/badge/Simulation-Gazebo-orange?style=flat-square)](http://gazebosim.org/)
[![Framework](https://img.shields.io/badge/Framework-ROS2-green?style=flat-square)](https://docs.ros.org/en/humble/index.html)

🤖 This project implements **multi-robot coordination** in simulation, combining **SLAM**, **YOLOv5 object detection**, and **autonomous navigation** to detect and retrieve cylindrical targets using TurtleBot3 Waffle Pi robots in Gazebo.

<p align="center">
  <img src="/images/Screenshot from 2025-07-02 02-55-00.png" alt="Robots performing SLAM" width="500"/>
  <br/>
  <em>Multi-robot SLAM environment</em>
</p>

<p align="center">
  <img src="/images/Screenshot from 2025-07-02 02-29-19.png" alt="YOLOv5 Detection" width="500"/>
  <br/>
  <em>YOLOv5-based target detection</em>
</p>

## Project Overview

### ❓ Problem Statement

The aim was to create a **multi-robot system** capable of:
- Mapping an unknown environment using SLAM
- Detecting specific cylindrical targets with YOLOv5
- Sharing detection information between robots
- Navigating towards detected targets and avoiding obstacles autonomously

**Core Requirements:**
- ROS 2-based distributed architecture
- Real-time detection and navigation
- Autonomous exploration and task coordination
- Multi-sensor fusion (LiDAR + Camera)

## 🧠 System Architecture

- **Robots:** TurtleBot3 Waffle Pi (multiple units)
- **Sensors:**
  - 2D LiDAR for mapping & obstacle avoidance
  - Intel RealSense R200 RGB camera for YOLO-based object detection
- **Core Nodes:**
  - `cordination_manager.py` – Handles inter-robot communication & task allocation
  - `smart_final_multi_yolo_detector.py` – YOLOv5 inference node
  - `exploration_node.py` – Autonomous mapping & exploration
  - `target_navigator.py` – Navigation towards detected targets

<p align="center">
  <img src="Media/system_architecture.png" alt="System Architecture" width="500"/>
  <br/>
  <em>System architecture for multi-robot coordination</em>
</p>

## 📐 Simulation Setup

- **Simulator:** Gazebo Fortress
- **Robots:** Multiple TurtleBot3 Waffle Pi models
- **Mapping:** `slam_toolbox` asynchronous mode
- **Navigation:** ROS 2 Navigation Stack
- **Detection:** YOLOv5 custom-trained model

### LiDAR Specifications
| Parameter | Value |
|-----------|-------|
| Mount Height | 5 cm |
| FOV | 360° |
| Angular Resolution | 0.5° (720 samples) |
| Range | 0.12 m – 3.5 m |
| Frequency | 10 Hz |
| Topic | `/tb3_X/scan` |

### Camera Specifications
| Parameter | Value |
|-----------|-------|
| Type | RGB |
| Model | Intel RealSense R200 |
| Topic | `/tb3_X/camera/image_raw` |
| Detection Model | YOLOv5 (custom-trained) |
| Confidence Threshold | 0.7 |

## 🚀 How to Run the Project

### Prerequisites
- ROS 2 (Humble recommended)
- Gazebo Fortress
- Python 3.8+
- YOLOv5 dependencies
- TurtleBot3 Gazebo models

### Installation
- Clone the repository:
  ```bash
  git clone https://github.com/your_username/multi_robot_coordination.git

- Install dependencies:
  ```bash
  cd multi_robot_coordination rosdep install --from-paths src --ignore-src -r -y

 
### Running the Simulation
- Terminal 1 – Launch Simulation:
  ```bash
    cd ~/your_workspace_folder
    colcon build
    source install/setup.bash
    export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/home/username/path_to_ws/src/turtlebot3_gazebo/models
    ros2 launch turtlebot3_gazebo final_gazebo_robot_slam.launch.py
- Terminal 2 – Coordination Manager:
  ```bash
    cd ~/your_workspace_folder
    source install/setup.bash
    python3 src/multi_robot_coordination/multi_robot_coordination/cordination_manager.py
- Terminal 3 – YOLO Detector:
  ```bash
    cd ~/your_workspace_folder
    source install/setup.bash
    python3 src/multi_robot_coordination/multi_robot_coordination/smart_final_multi_yolo_detector.py
- Terminal 4 – Exploration Node:
  ```bash
    cd ~/your_workspace_folder
    source install/setup.bash
    python3 src/multi_robot_coordination/multi_robot_coordination/exploration_node.py
- Terminal 5 – Target Navigator:
  ```bash
    cd ~/your_workspace_folder
    source install/setup.bash
    python3 src/multi_robot_coordination/multi_robot_coordination/target_navigator.py
   
## 📊 LiDAR vs Camera
| Feature | LiDAR | Camera (YOLOv5) |
|---------|-------|-----------------|
| Purpose | Mapping, obstacle avoidance | Target detection |
| Data Type | Distance array | RGB image |
| Detection Type | Geometric only | Semantic (class ID) |
| ROS Topic | `/tb3_X/scan` | `/tb3_X/camera/image_raw` |

<p align="center">
  <img src="/images/ezgif-1106f4facf1899.gif" alt="Multi-Robot Coordination Demo" width="500"/>
  <br/>
  <em>Multi-Robot Coordination demo in action</em>
</p>

