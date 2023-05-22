#include <ros/ros.h>
#include <geometry_msgs/Twist.h>

int main(int argc, char **argv){
    ros::init(argc, argv, "turtle_control");
    ros::NodeHandle nh;

    ros::Publisher twist_pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);

    geometry_msgs::Twist twist_msgs;

    int count = 0;

    ros::Rate loop_rate(1);

    while(ros::ok()){
        if(count % 2 == 0){
            twist_msgs.linear.x = 2.0;
            twist_msgs.angular.z = 0.0;
        }
        else if(count % 2 == 1){
            twist_msgs.linear.x = 0.0;
            twist_msgs.angular.z = 144.0*M_PI/180;
        }
        count++;

        twist_pub.publish(twist_msgs);

        ros::spinOnce();

        loop_rate.sleep();
    }

    return 0;
}