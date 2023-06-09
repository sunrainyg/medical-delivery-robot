// Generated by gencpp from file cartographer_ros_msgs/StartTrajectory.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_STARTTRAJECTORY_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_STARTTRAJECTORY_H

#include <ros/service_traits.h>


#include <cartographer_ros_msgs/StartTrajectoryRequest.h>
#include <cartographer_ros_msgs/StartTrajectoryResponse.h>


namespace cartographer_ros_msgs
{

struct StartTrajectory
{

typedef StartTrajectoryRequest Request;
typedef StartTrajectoryResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StartTrajectory
} // namespace cartographer_ros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cartographer_ros_msgs::StartTrajectory > {
  static const char* value()
  {
    return "dcc000df748d283ba7bf678a47ffa491";
  }

  static const char* value(const ::cartographer_ros_msgs::StartTrajectory&) { return value(); }
};

template<>
struct DataType< ::cartographer_ros_msgs::StartTrajectory > {
  static const char* value()
  {
    return "cartographer_ros_msgs/StartTrajectory";
  }

  static const char* value(const ::cartographer_ros_msgs::StartTrajectory&) { return value(); }
};


// service_traits::MD5Sum< ::cartographer_ros_msgs::StartTrajectoryRequest> should match 
// service_traits::MD5Sum< ::cartographer_ros_msgs::StartTrajectory > 
template<>
struct MD5Sum< ::cartographer_ros_msgs::StartTrajectoryRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cartographer_ros_msgs::StartTrajectory >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::StartTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cartographer_ros_msgs::StartTrajectoryRequest> should match 
// service_traits::DataType< ::cartographer_ros_msgs::StartTrajectory > 
template<>
struct DataType< ::cartographer_ros_msgs::StartTrajectoryRequest>
{
  static const char* value()
  {
    return DataType< ::cartographer_ros_msgs::StartTrajectory >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::StartTrajectoryRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cartographer_ros_msgs::StartTrajectoryResponse> should match 
// service_traits::MD5Sum< ::cartographer_ros_msgs::StartTrajectory > 
template<>
struct MD5Sum< ::cartographer_ros_msgs::StartTrajectoryResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cartographer_ros_msgs::StartTrajectory >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::StartTrajectoryResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cartographer_ros_msgs::StartTrajectoryResponse> should match 
// service_traits::DataType< ::cartographer_ros_msgs::StartTrajectory > 
template<>
struct DataType< ::cartographer_ros_msgs::StartTrajectoryResponse>
{
  static const char* value()
  {
    return DataType< ::cartographer_ros_msgs::StartTrajectory >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::StartTrajectoryResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_STARTTRAJECTORY_H
