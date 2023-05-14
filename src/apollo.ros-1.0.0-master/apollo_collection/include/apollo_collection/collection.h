#ifndef __APOLLO_COLLECTION_COLLECTION_H__
#define __APOLLO_COLLECTION_COLLECTION_H__

#include <string>
#include <fstream>
#include <nmea_msgs/Sentence.h>

namespace apollo {
namespace collection {

struct ParseInfo {
  double longitude;
  double latitud;
  double theta;
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