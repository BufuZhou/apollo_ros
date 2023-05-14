#!/bin/bash

source /home/lzh/apollo_ros/devel/setup.bash

rostopic pub -r 1 /data_collection nmea_msgs/Sentence -- "header:
  seq: 3
  stamp:
    secs: 1683731901
    nsecs: 758897644
  frame_id: "map"
sentence: "GPYBM,SN10009927,085454.00,+31.284616159,+121.149198594,23.588,179.843,-0.818,0.024,-0.018,0.064,0.030,3463100.193,609429.443,,,1,4,42,200,,1.024,37,*56""