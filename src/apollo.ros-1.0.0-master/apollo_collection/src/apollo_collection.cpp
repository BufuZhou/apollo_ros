#include "apollo_collection/collection.h"

#include <ros/ros.h>
#include <nmea_msgs/Sentence.h>
#include <boost/bind.hpp>
#include <std_msgs/String.h>

typedef apollo::collection::Collection Collection;

int main(int argc, char **argv) {

  ros::init(argc, argv, "data_collection");
  ros::NodeHandle nh;

  Collection collecton("garage");
  auto f = boost::bind(&Collection::CallbackCollection, &collecton, _1);
  ros::Subscriber data_sub = nh.subscribe<nmea_msgs::Sentence>("data_collection", 100, f);
  ROS_INFO("Wait collection ...");
  ros::spin();

  return 0;
}