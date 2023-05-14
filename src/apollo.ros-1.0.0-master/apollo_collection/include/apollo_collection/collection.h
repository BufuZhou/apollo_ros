#ifndef __APOLLO_COLLECTION_COLLECTION_H__
#define __APOLLO_COLLECTION_COLLECTION_H__

#include <string>
#include <fstream>
#include <nmea_msgs/Sentence.h>

namespace apollo {
namespace collection {

struct ParseInfo {
  // x,y,z,speed,acceleration,curvature,curvature_change_rate,
  // time,theta,gear,s,throttle,brake,steering
  double x = 0;
  double y = 0;
  double z = 0;
  double speed = 0;
  double acceleration = 0;
  double curvature = 0;
  double curvature_change_rate = 0;
  double time = 0;
  double theta = 0;
  double gear = 0;
  double s = 0;
  double throttle = 0;
  double brake = 0;
  double steering = 0;
};

class Collection {
 public:
  Collection();
  Collection(const std::string& name);
  
  void CallbackCollection(const nmea_msgs::Sentence::ConstPtr& s);

  void CollectionEnd() {
    data_file_.close();
  }

 private:
  void ParseString(const std::string& str);

  ParseInfo buffer_;
  std::ofstream data_file_;
};

}  // collection
}  // apollo



#endif  // __APOLLO_COLLECTION_COLLECTION_H__