# apollo_ros

## 简介

 此工程为基于 apollo 1.0.0 的ros1移植版本，移植主要目的如下：

- 学习apollo框架设计
- 学习apollo中的控制算法

 实现场景：
  通过录制的轨迹实现车辆自动循迹功能

apollo_ros模块有:

```bash
apollo_ros
    ├── apollo_collection
    ├── apollo_common
    ├── apollo_control
    ├── apollo_decision
    ├── apollo_localization
    ├── apollo_msgs
    ├── apollo_planning
    └── apollo_simulator
```

目前移植版本与原有版本改动点如下：

- 使用原生ros（基于noetic）替代apollo中更改的ros
- 使用ros pkg封装apollo中每个module
- 使用cmake进行编译
- 将protobuff版本提升到3.6.1
- 使用ros中的`std_msgs/String`替代apollo的`pd_msgs/xxx`消息
- 增加pnc仿真工具`apollo_simulator`

>此移植版本，能很好的将自己的算法增加到框架中，应用于机器人或者无人驾驶中。同时，由于apollo中的模块抽象，每个模块之间和中间件没有耦合，中间件能很容易从ros1移植到ros2、LCM等，具体开发可根据自己的需求进行魔改。

## 安装

### 依赖

- ros1（noetic，安装见ros官网）

- eigen3

  ```bash
  sudo apt install libeigen3-dev
  ```

- glog

  ```bash
  sudo apt install libgoogle-glog-dev
  ```

- gflags

  ```bash
  sudo apt install libgflags-dev 
  ```

- gtest

  ```bash
  sudo apt install libgtest-dev 
  ```

- protobuff 3.6.1

  ```shell
  wget https://github.com/google/protobuf/releases/download/v3.6.1/protobuf-cpp-3.6.1.tar.gz
  tar xzf protobuf-cpp-3.6.1.tar.gz
  
  pushd protobuf-3.6.1
  ./configure --prefix=/usr
  make -j8
  make install
  popd
  ```

### 编译

- 创建的ros工作空间
- 使用`catkin_make`或者`catkin build`指令进行代码编译

##  测试

### 数据采集
1. step1 启动rtk节点
>apollo_collection

有两种方式，一种是真实rtk的节点，一种是模拟rtk的数据格式的节点

先启动roscore
```bash
roscore
```
* 硬件驱动
  ```bash
  rosrun nmea_navsat_driver nmea_topic_serial_reader _port:=/dev/ttyUSB0 _baud:=55600
  ```
* 模拟rtk节点
  ```shell
  cd ~/apollo_ros/src/apollo.ros-1.0.0-master/apollo_collection/script
  sudo chmod +x data_collection.sh
  ./data_collection.sh
  ```
2. 运行ros节点
```shell
roslaunch apollo_collecton data_collection.launch
```
在apollo_ros目录下会存下一个*garage.csf*文件，数据采集完成

### 循迹仿真
>apollo_simulator

这里主要使用`apollo_simulator`仿真工具进行规划控制（pnc）进行测试，测试指令如下：

```shell
roslaunch apollo_simulator simulation.launch
```
会自动加载`~/apollo_ros/src/apollo.ros-1.0.0-master/apollo_planning/data/`目录下的*garage.csf*文件，作为初始路径的输入
在rviz中点击工具栏中的`2D Pose Estimate`的按钮，在主窗口内给定一个初始位姿，车辆就可以按照初始路径进行循迹
