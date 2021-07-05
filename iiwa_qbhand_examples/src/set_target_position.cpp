#include <ros/ros.h>
#include <iiwa_msgs/JointPosition.h>
// #include <iiwa_msgs/JointVelocity.h>
// #include <iiwa_msgs/JointPositionVelocity.h>
// #include <geometry_msgs/PointStamped.h>
#include <iostream>

float Angle2Radian(float angle)
{
  float pi = 3.1415926;
  return (angle / 180 * pi);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "set_target_position");
  // ros::NodeHandle nh;
  ros::NodeHandle nh("~");

  ros::Publisher pub_jp = nh.advertise<iiwa_msgs::JointPosition>("/iiwa/command/JointPosition", 1);

  // ROS spinner. Not necessary if only one thread.
  ros::AsyncSpinner spinner(1);
  spinner.start();

  bool go2zero, go2p1, cycle;
  nh.param("go2zero", go2zero, false);
  nh.param("go2p1", go2p1, true);
  nh.param("cycle", cycle, true);

  iiwa_msgs::JointPosition joint_position;

  while (ros::ok())
  {
    ROS_DEBUG_STREAM("go2zero: " << go2zero);
    if (go2zero)
    {
      joint_position.position.a1 = 0;
      joint_position.position.a2 = 0;
      joint_position.position.a3 = 0;
      joint_position.position.a4 = 0;
      joint_position.position.a5 = 0;
      joint_position.position.a6 = 0;
      joint_position.position.a7 = 0;
    }
    else if (go2p1)
    {
      //// yajun's experiment initial point
      // joint_position.position.a1 = -0.746;
      // joint_position.position.a2 = 1.152;
      // joint_position.position.a3 = 0;
      // joint_position.position.a4 = -1.147;
      // joint_position.position.a5 = 0.005;
      // joint_position.position.a6 = 0.840;
      // joint_position.position.a7 = -0.749;

      // joint_position.position.a1 = Angle2Radian(70.88);
      // joint_position.position.a2 = Angle2Radian(35.10);
      // joint_position.position.a3 = Angle2Radian(7.28);
      // joint_position.position.a4 = Angle2Radian(-76.08);
      // joint_position.position.a5 = Angle2Radian(-5.14);
      // joint_position.position.a6 = Angle2Radian(61.64);
      // joint_position.position.a7 = Angle2Radian(15.83);

      // joint_position.position.a1 = Angle2Radian(5.17);
      // joint_position.position.a2 = Angle2Radian(33.99);
      // joint_position.position.a3 = Angle2Radian(0.11);
      // joint_position.position.a4 = Angle2Radian(-79.38);
      // joint_position.position.a5 = Angle2Radian(2.06);
      // joint_position.position.a6 = Angle2Radian(54.15);
      // joint_position.position.a7 = Angle2Radian(-4.35);

      joint_position.position.a1 = Angle2Radian(42.03);
      joint_position.position.a2 = Angle2Radian(55.07);
      joint_position.position.a3 = Angle2Radian(-6);
      joint_position.position.a4 = Angle2Radian(-61.83);
      joint_position.position.a5 = Angle2Radian(-5.20);
      joint_position.position.a6 = Angle2Radian(53.52);
      joint_position.position.a7 = Angle2Radian(35.35);
      if (cycle)
      {
       go2p1 = false;
      }
    }
    else
    {
      joint_position.position.a1 = Angle2Radian(-41.82);
      joint_position.position.a2 = Angle2Radian(23.89);
      joint_position.position.a3 = Angle2Radian(-9.62);
      joint_position.position.a4 = Angle2Radian(-80.04);
      joint_position.position.a5 = Angle2Radian(15.54);
      joint_position.position.a6 = Angle2Radian(71.33);
      joint_position.position.a7 = Angle2Radian(-62.80);
      if (cycle)
      {
       go2p1 = true;
      }
    }
    pub_jp.publish(joint_position);
    sleep(5);
    ros::spinOnce(); //not necessary here, because there is no callback function in this node.
  }

  return 0;
}
