set -e

source /opt/ros/galactic/setup.bash

rm -rf build install log

colcon build --packages-select teleop_msgs
colcon build --packages-select teleop_py
. install/setup.bash

echo "running ros2 interface show teleop_msgs/srv/EStopService......"
ros2 interface show teleop_msgs/srv/EStopService

echo "running ros2 interface show teleop_msgs/msg/VehicleControlData......"
ros2 interface show teleop_msgs/msg/VehicleControlData

echo "running ros2 run teleop_py teleop_py_node_exe......"
ros2 run teleop_py teleop_py_node_exe