#include "apollo_collection/time_stamp.h"

namespace apollo {
namespace collection {

std::string GetTimeStamp() {
  time_t current_time = time(nullptr);
  char current_time_char[256];
  strftime(current_time_char, sizeof(current_time_char), "%Y%m%d%H%M%S",
           localtime(&current_time));
  std::string current_time_str = current_time_char;
  return current_time_str;
}

}  // collection
}  // apollo