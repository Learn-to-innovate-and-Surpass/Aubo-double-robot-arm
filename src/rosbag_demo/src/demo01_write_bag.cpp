#include "ros/ros.h" 
#include "rosbag/bag.h"
#include "std_msgs/String.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "my_node");
    ros::NodeHandle nh;
    rosbag::Bag bag;
    bag.open("hello.bag",rosbag::bagmode::Write);
    std_msgs::String msg;
    msg.data = "hello xxx";
    bag.write("/chatter",ros::Time::now(),msg);

    bag.close(); 
    return 0;
}  