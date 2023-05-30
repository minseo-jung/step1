#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/Pose.h>
#include <std_msgs/String.h>

bool init = false;
turtlesim::Pose initPose;

// Todo subscribe하기
/*
함수 이름은 squareCallback으로 
ROS_INFO가 c언어 printf라 생각하면 됨
*/

int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber");

  ros::NodeHandle nh;

  ros::Subscriber sub = nh.subscribe("make_square", 1000, squareCallback);

  ros::spin();

  return 0;
}