# iiwa_qbhand

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
