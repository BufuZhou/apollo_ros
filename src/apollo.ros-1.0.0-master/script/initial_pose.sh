#!/bin/bash

source /home/lzh/apollo_ros/devel/setup.bash

rostopic pub -1 /initialpose geometry_msgs/PoseWithCovarianceStamped -- "header:
  seq: 3
  stamp:
    secs: 1683731901
    nsecs: 758897644
  frame_id: "map"
pose:
  pose:
    position:
      x: -7.089181423187256
      y: -2.2342958450317383
      z: 0.0
    orientation:
      x: 0.0
      y: 0.0
      z: 0.979904614645722
      w: 0.19946665434608124
  covariance: [0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.06853892326654787]"