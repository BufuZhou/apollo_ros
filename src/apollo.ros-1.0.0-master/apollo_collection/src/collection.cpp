#include "apollo_collection/collection.h"

#include <ros/ros.h>

#include "apollo_collection/time_stamp.h"

namespace apollo {
namespace collection {

Collection::Collection() {
  std::string timestamp = GetTimeStamp();
  std::string file_name = "data" + timestamp + ".csv";
  data_file_.open(file_name.c_str());
  data_file_ << "x,y,theta" << std::endl;
}

Collection::Collection(const std::string& name) {
  std::string file_name = name + ".csv";
  data_file_.open(file_name.c_str());
  data_file_ << "x,y,theta" << std::endl;
}

void Collection::CallbackCollection(const nmea_msgs::Sentence::ConstPtr& s) {
  ROS_INFO("Data collection");
  ParseString(s->sentence);
  data_file_ << buffer_.longitude << "," << buffer_.latitud << "," << buffer_.theta << std::endl;
}

void Collection::ParseString(const std::string& str) {
  std::istringstream ss(str);
  std::vector<std::string> segment;
  std::string token;
  while (std::getline(ss, token, ',')) {
    segment.push_back(token);
  }
  buffer_.longitude = std::stod(segment[3]);
  buffer_.latitud = std::stold(segment[4]);
  buffer_.theta = std::stold(segment[6]);
}

}  // collection
}  // apollo