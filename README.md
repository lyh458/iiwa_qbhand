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
roslaunch iiwa_qbhand_moveit moveit_planning_execution.launch sim:=false
```

The rqt_graph:

![rqt_graph_real](https://cdn.jsdelivr.net/gh/lyh458/ImageRepo@main/image/1628594120308-1628594120297-iiwa_qbhand_seperated_namespace_real_rqt_graph.png)

## Other Branchs

This branch `master` holds iiwa and ur in two different namespace, if you prefect a unified namespace version, you can try this branch [all-in-one-namespace](https://github.com/lyh458/iiwa_qbhand/tree/all-in-one-namespace), whose almost all nodes and topics are included in a same namespace, `iiwa` by default.

![rqt_graph_all-in-one-namespace](https://cdn.jsdelivr.net/gh/lyh458/ImageRepo@main/image/1628594320235-1628594320224-iiwa_qbhand_all-in-one_namespace_real_rqt_graph.png)

## TO DO

- [ ] GAZEBO simulation supported.
