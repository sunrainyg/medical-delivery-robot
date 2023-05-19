// Generated by gencpp from file cartographer_ros_msgs/WriteState.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_WRITESTATE_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_WRITESTATE_H

#include <ros/service_traits.h>


#include <cartographer_ros_msgs/WriteStateRequest.h>
#include <cartographer_ros_msgs/WriteStateResponse.h>


namespace cartographer_ros_msgs
{

struct WriteState
{

typedef WriteStateRequest Request;
typedef WriteStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct WriteState
} // namespace cartographer_ros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cartographer_ros_msgs::WriteState > {
  static const char* value()
  {
    return "96db93844e1eb87ed5b1526b3e48e3bb";
  }

  static const char* value(const ::cartographer_ros_msgs::WriteState&) { return value(); }
};

template<>
struct DataType< ::cartographer_ros_msgs::WriteState > {
  static const char* value()
  {
    return "cartographer_ros_msgs/WriteState";
  }

  static const char* value(const ::cartographer_ros_msgs::WriteState&) { return value(); }
};


// service_traits::MD5Sum< ::cartographer_ros_msgs::WriteStateRequest> should match 
// service_traits::MD5Sum< ::cartographer_ros_msgs::WriteState > 
template<>
struct MD5Sum< ::cartographer_ros_msgs::WriteStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cartographer_ros_msgs::WriteState >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::WriteStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cartographer_ros_msgs::WriteStateRequest> should match 
// service_traits::DataType< ::cartographer_ros_msgs::WriteState > 
template<>
struct DataType< ::cartographer_ros_msgs::WriteStateRequest>
{
  static const char* value()
  {
    return DataType< ::cartographer_ros_msgs::WriteState >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::WriteStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cartographer_ros_msgs::WriteStateResponse> should match 
// service_traits::MD5Sum< ::cartographer_ros_msgs::WriteState > 
template<>
struct MD5Sum< ::cartographer_ros_msgs::WriteStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cartographer_ros_msgs::WriteState >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::WriteStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cartographer_ros_msgs::WriteStateResponse> should match 
// service_traits::DataType< ::cartographer_ros_msgs::WriteState > 
template<>
struct DataType< ::cartographer_ros_msgs::WriteStateResponse>
{
  static const char* value()
  {
    return DataType< ::cartographer_ros_msgs::WriteState >::value();
  }
  static const char* value(const ::cartographer_ros_msgs::WriteStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_WRITESTATE_H
