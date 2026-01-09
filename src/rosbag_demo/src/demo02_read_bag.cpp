#include "ros/ros.h"
#include "rosbag/bag.h"
#include "std_msgs/String.h"
#include "rosbag/view.h"


int main(int argc, char  *argv[])
{
    setlocale(LC_ALL,"");
    ros::init(argc,argv,"bag_read");
    ros::NodeHandle nh;

    rosbag::Bag bag;
    bag.open("/hello.bag",rosbag::bagmode::Read);

   for (auto &&m : rosbag::View(bag))
   {
    
        std::string topic = m.getTopic(); 
        ros::Time time = m.getTime();
        std_msgs::StringPtr p =m.instantiate<std_msgs::String>();
        ROS_INFO("jiexideneirong,huati:%s,shijian:%.2f,xiaoxizhi:%s",topic.c_str(),time.toSec(),p->data.c_str());

   }
    bag.close();
    return 0;
}
