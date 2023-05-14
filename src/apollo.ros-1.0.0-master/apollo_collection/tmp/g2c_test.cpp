#include <ros/ros.h>
#include <nmea_msgs/Sentence.h>
#include <boost/bind.hpp>
#include <std_msgs/String.h>

#include "apollo_collection/collection.h"
#include "apollo_collection/gps2coordinate.h"

typedef apollo::collection::Collection Collection;
typedef apollo::collection::GPS_Coordinate GPS_Coordinate;

int main(int argc, char **argv) {
  GPS_Coordinate gps(121.149198594, 31.284616159);
  // GPS_Coordinate data = gps.GCJ02toWGS84();
  // gps.WGS84toGCJ02();

  std::cout << gps.latitude << "\t" << gps.longitude << std::endl;
  GPS_Coordinate data1 = GPS_Coordinate::BD09toGCJ02(gps);
  std::cout << data1.latitude << "\t" << data1.longitude << std::endl;
  GPS_Coordinate data2 = GPS_Coordinate::BD09toMC(gps);
  std::cout << data2.latitude << "\t" << data2.longitude << std::endl;
  GPS_Coordinate data3 = GPS_Coordinate::BD09toWGS84(gps);
  std::cout << data3.latitude << "\t" << data3.longitude << std::endl;
  GPS_Coordinate data4 = GPS_Coordinate::GCJ02toBD09(gps);
  std::cout << data4.latitude << "\t" << data4.longitude << std::endl;
  GPS_Coordinate data5 = GPS_Coordinate::GCJ02toWGS84(gps);
  std::cout << data5.latitude << "\t" << data5.longitude << std::endl;
  GPS_Coordinate data6 = GPS_Coordinate::MCtoBD09(gps);
  std::cout << data6.latitude << "\t" << data6.longitude << std::endl;
  GPS_Coordinate data7 = GPS_Coordinate::WGS84toBD09(gps);
  std::cout << data7.latitude << "\t" << data7.longitude << std::endl;
  GPS_Coordinate data8 = GPS_Coordinate::WGS84toGCJ02(gps);
  std::cout << data8.latitude << "\t" << data8.longitude << std::endl;
  
  return 0;
}