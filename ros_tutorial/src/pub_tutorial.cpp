#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/String.h>

int main(int argc, char **argv){
    ros::init(argc, argv, "publisher");
    ros::NodeHandle nh;

    ros::Publisher twist_pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);

    //Todo 사각형이 완성되면 publish하기
    //참고 cpp talker
    /*
    채우기
    */

    geometry_msgs::Twist twist_msgs;

    ros::Rate loop_rate(1);

    //Todo
    // 정사각형 만들기
    // 총 길이가 8이 되게 만들기
    // 정사각형이 완성되면 square라고 pub하기
    //make_square라는 이름으로 pub하기

    // 참고
    // 별만들기
    // int count = 0;
    //  while(ros::ok()){
    //         if(count % 2 == 0){
    //             twist_msgs.linear.x = 2.0;
    //             twist_msgs.angular.z = 0.0;
    //         }
    //         else if(count % 2 == 1){
    //             twist_msgs.linear.x = 0.0;
    //             twist_msgs.angular.z = 144.0*M_PI/180;
    //         }
    //         count++;

    //         twist_pub.publish(twist_msgs);

    //         ros::spinOnce();

    //         loop_rate.sleep();
    //     }

    /*
    채우기
    */

    return 0;
}