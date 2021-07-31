<!--
 * @Author: lyh458
 * @Date: 2021-07-31 14:56:41
 * @LastEditTime: 2021-07-31 17:11:20
 * @LastEditors: lyh458
 * @Description: TO DO
 * @FilePath: /safety_hrc_ws/home/lyh/Codes/gripper_ws/src/robot_with_gripper/iiwa_qbhand/README.md
-->
# iiwa_qbhand

![iiwa_qbhand](https://cdn.jsdelivr.net/gh/lyh458/ImageRepo@main/image/1627714801339-1627714801318.png)

- **iiwa_qbhand_description** : a URDF for a KUKA LBR IIWA robot with a qbhand attached and a rigid base.
- **iiwa_qbhand_moveit** : a MoveIt! package to work with the robot description just defined.
- **iiwa_qbhand_bringup**: a package to bringup LBR iiwa and qbhand.

## Dependencies

- [iiwa_stack](https://github.com/IFL-CAMP/iiwa_stack): ROS integration for the KUKA LBR IIWA R800/R820 (7/14 Kg).
- [qbhand](https://bitbucket.org/qbrobotics/qbhand-ros/src/production-melodic/):  A package contains the ROS nodes aimed to visualize and control the qbrobotics® qbhand device.

## Usage

After installing all the dependencies, you can:

- Visualize in RVIZ:

```xml
roslaunch iiwa_qbhand_moveit demo.launch
```

- Real robot control:

```xml
roslaunch iiwa_qbhand_moveit moveit_planning_execution.launch
```

## TO DO

- [ ] GAZEBO simulation supported.
