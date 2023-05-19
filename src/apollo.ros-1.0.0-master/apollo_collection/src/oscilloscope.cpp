#include <iostream>
#include <fstream>
#include <cmath>

#include "apollo_collection/collection.h"

typedef apollo::collection::ParseInfo ParseInfo;

constexpr double kVehicleSpeed = 2.5;

void Data2File() {
  std::string file_name = "garage.csv";
  std::ofstream fout;
  fout.open(file_name.c_str());
  fout << "x,y,z,speed,acceleration,curvature,curvature_change_rate,\
time,theta,gear,s,throttle,brake,steering" << std::endl;
  ParseInfo buffer;

  double radius = 25.0;  // radius 
  int num_points = 1500;  // number of sampling points
  // the coordinate of the center of the circle
  double centerX = 0.0;
  double centerY = 0.0;
  // delta angle
  double angle_increment = 2 * M_PI / num_points;

  for (int i = 0; i < num_points; ++i) {
    double angle = i * angle_increment;
    double x = centerX + radius * cos(angle);
    double y = centerY + radius * sin(angle);
    // angle to x axis
    double angle_to_x_axis = atan2(y, x) - M_PI / 2;

    buffer.x = x;
    buffer.y = y;
    buffer.theta = angle_to_x_axis;
    buffer.speed = kVehicleSpeed;
    fout << std::setprecision(10) << buffer.x << ", " \
                                  << buffer.y << ", " \
                                  << buffer.z << ", " \
                                  << buffer.speed << ", " \
                                  << buffer.acceleration << ", " \
                                  << buffer.curvature << ", " \
                                  << buffer.curvature_change_rate << ", " \
                                  << buffer.time << ", " \
                                  << buffer.theta << ", " \
                                  << buffer.gear << ", " \
                                  << buffer.s << ", " \
                                  << buffer.throttle << ", " \
                                  << buffer.brake << ", " \
                                  << buffer.steering << std::endl;
  }
}

int main(int argc, char **argv) {
  Data2File();

  return 0;
}