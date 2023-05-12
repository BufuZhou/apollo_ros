#include <ros/ros.h>
#include <nav_msgs/Path.h>
#include <gflags/gflags.h>

#include "apollo_common/log.h"
#include "apollo_planning/planning_node.h"

int main(int argc, char **argv) {
  google::InitGoogleLogging(argv[0]);
  google::ParseCommandLineFlags(&argc, &argv, true);

  ros::init(argc, argv, "raw_path");
  ::apollo::planning::PlanningNode planning_node;
  ros::NodeHandle nh;
  ros::Publisher raw_path_pub = nh.advertise<nav_msgs::Path>("/raw_path_trajectory", 100);
  ros::Rate loop_rate(10);
  
  static int count = 0;
  nav_msgs::Path raw_path_trajectory;
  geometry_msgs::PoseStamped buffer;
  raw_path_trajectory.header.seq = count;
  raw_path_trajectory.header.stamp = ros::Time::now();
  raw_path_trajectory.header.frame_id = "map";
  auto raw_path = planning_node.planning_.GetRawPath();
  for (auto ele : raw_path) {
    buffer.header.seq = 0;
    buffer.header.stamp = ros::Time::now();
    buffer.header.frame_id = "map";
    buffer.pose.position.x = ele.x;
    buffer.pose.position.y = ele.y;
    buffer.pose.position.z = 0;
    buffer.pose.orientation.x = 0.0;
    buffer.pose.orientation.y = 0.0;
    buffer.pose.orientation.z = 0.7234958434016457;
    buffer.pose.orientation.w = 0.6903287366034687;
    raw_path_trajectory.poses.emplace_back(buffer);
  }
  while (ros::ok()) {
    raw_path_pub.publish(raw_path_trajectory);
    ros::spinOnce();
    loop_rate.sleep();
    count++;
  }

  return 0;
}