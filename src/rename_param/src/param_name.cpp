#include "ros/ros.h"

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"hello");
    ros::NodeHandle nh;
    ros::param::set("/radiusA",100);
    ros::param::set("radiusA",100);
    ros::param::set("~radiusA",100);




    return 0;
}