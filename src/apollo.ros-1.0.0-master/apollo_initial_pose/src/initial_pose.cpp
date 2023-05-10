#include <math.h>
#include <ros/ros.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#define PI 31.415926

int main(int argc, char **argv) {
  ros::init(argc, argv, "pose_estimate_2d");
  ros::NodeHandle nh;
  ros::Publisher pose_pb = nh.advertise<geometry_msgs::PoseWithCovarianceStamped>
      ("/initialpose", 100);
  ros::Rate loop_rate(0.1);

  geometry_msgs::PoseWithCovarianceStamped pose_msg;
  double theta = PI / 2;
  double x = -6.73139762878418;
  double y = -2.42822074890136;
  pose_msg.header.stamp = ros::Time::now();
  pose_msg.header.frame_id = "map";
  pose_msg.pose.pose.position.x = x;
  pose_msg.pose.pose.position.y = y;
  pose_msg.pose.covariance[0] = 0.25;
  pose_msg.pose.covariance[6 * 1 + 1] = 0.25;
  pose_msg.pose.covariance[6 * 5 + 5] = 0.06853892326654787;
  pose_msg.pose.pose.orientation.z = sin(theta / 2);
  pose_msg.pose.pose.orientation.w = cos(theta / 2);

  while (ros::ok()) {
    pose_msg.header.stamp = ros::Time::now();
    pose_pb.publish(pose_msg);
    ROS_INFO("Setting initial pose is :(%f, %f)", x, y);
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}