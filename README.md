<!--
 * @Author: lyh458
 * @Date: 2021-07-31 14:56:41
 * @LastEditTime: 2021-07-31 15:00:49
 * @LastEditors: lyh458
 * @Description: TO DO
 * @FilePath: /iiwa_qbhand/README.md
-->
# iiwa_qbhand

![iiwa_qbhand](https://cdn.jsdelivr.net/gh/lyh458/ImageRepo@main/image/1627714801339-1627714801318.png)

- **iiwa_qbhand_description** : a URDF for a KUKA LBR IIWA robot with a qbhand attached and a rigid base.
- **iiwa_qbhand_moveit** : a MoveIt! package to work with the robot description just defined.
- **iiwa_qbhand_bringup**: a package to bringup LBR iiwa and qbhand.

## Usage

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
