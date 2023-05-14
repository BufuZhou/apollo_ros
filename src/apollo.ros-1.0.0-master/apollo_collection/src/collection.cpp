#include "apollo_collection/collection.h"

#include <ros/ros.h>
#include <iomanip>
#include <cmath>

#include "apollo_collection/time_stamp.h"

namespace apollo {
namespace collection {

Collection::Collection() {
  std::string timestamp = GetTimeStamp();
  std::string file_name = "data" + timestamp + ".csv";
  data_file_.open(file_name.c_str());
  data_file_ << "x,y,z,speed,acceleration,curvature,curvature_change_rate, \
time,theta,gear,s,throttle,brake,steering" << std::endl;
}

Collection::Collection(const std::string& name) {
  std::string file_name = name;
  data_file_.open(file_name.c_str());
  data_file_ << "x,y,z,speed,acceleration,curvature,curvature_change_rate, \
time,theta,gear,s,throttle,brake,steering" << std::endl;
}

void Collection::CallbackCollection(const nmea_msgs::Sentence::ConstPtr& s) {
  ROS_INFO("Data collection");
  ParseString(s->sentence);
  // x,y,z,speed,acceleration,curvature,curvature_change_rate,
  // time,theta,gear,s,throttle,brake,steering
  data_file_ << std::setprecision(15) << buffer_.x << ", " \
                                      << buffer_.y << ", " \
                                      << buffer_.z << ", " \
                                      << buffer_.speed << ", " \
                                      << buffer_.acceleration << ", " \
                                      << buffer_.curvature << ", " \
                                      << buffer_.curvature_change_rate << ", " \
                                      << buffer_.time << ", " \
                                      << buffer_.theta << ", " \
                                      << buffer_.gear << ", " \
                                      << buffer_.s << ", " \
                                      << buffer_.throttle << ", " \
                                      << buffer_.brake << ", " \
                                      << buffer_.steering << std::endl;
}

void Collection::ParseString(const std::string& str) {
  std::istringstream ss(str);
  std::vector<std::string> segment;
  std::string token;
  while (std::getline(ss, token, ',')) {
    segment.push_back(token);
  }
  buffer_.x = std::stod(segment[3]);
  buffer_.y = std::stold(segment[4]);
  buffer_.theta = std::stold(segment[6])  * M_PI / 180.0;
}

}  // collection
}  // apollo