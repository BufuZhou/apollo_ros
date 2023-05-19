cmake_minimum_required(VERSION 3.0.2)
project(apollo_planning)

add_compile_options(-std=c++17)
# set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_BUILD_TYPE "Release")

find_package(Eigen3 REQUIRED)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  apollo_msgs
  apollo_common
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES apollo_planning
#  CATKIN_DEPENDS roscpp
#  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${EIGEN3_INCLUDE_DIR}
)

add_executable(${PROJECT_NAME} 
  src/main.cc
  src/planning_node.cc
  src/planning.cc
  src/planner_factory.cc
  # common
  src/common/planning_gflags.cc
  # planner
  src/planner/rtk_replay_planner.cc
)
add_executable(raw_path_node
  src/raw_path.cpp
  src/planning_node.cc
  src/planning.cc
  src/planner_factory.cc
  # common
  src/common/planning_gflags.cc
  # planner
  src/planner/rtk_replay_planner.cc
)

add_dependencies(${PROJECT_NAME} 
  ${${PROJECT_NAME}_EXPORTED_TARGETS} 
  ${catkin_EXPORTED_TARGETS}
)
add_dependencies(raw_path_node 
  ${${PROJECT_NAME}_EXPORTED_TARGETS} 
  ${catkin_EXPORTED_TARGETS}
)
target_link_libraries(${PROJECT_NAME}
  ${catkin_LIBRARIES}
  protobuf
  glog
  gflags
)
target_link_libraries(raw_path_node
  ${catkin_LIBRARIES}
  protobuf
  glog
  gflags
)

# install
install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
	ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
	LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
)
install(TARGETS raw_path_node 
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
	ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
	LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
)