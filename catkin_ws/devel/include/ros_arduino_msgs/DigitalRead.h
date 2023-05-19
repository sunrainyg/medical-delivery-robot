// Generated by gencpp from file ros_arduino_msgs/DigitalRead.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_DIGITALREAD_H
#define ROS_ARDUINO_MSGS_MESSAGE_DIGITALREAD_H

#include <ros/service_traits.h>


#include <ros_arduino_msgs/DigitalReadRequest.h>
#include <ros_arduino_msgs/DigitalReadResponse.h>


namespace ros_arduino_msgs
{

struct DigitalRead
{

typedef DigitalReadRequest Request;
typedef DigitalReadResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DigitalRead
} // namespace ros_arduino_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_arduino_msgs::DigitalRead > {
  static const char* value()
  {
    return "78b8839065b88768904414e0b6e384fc";
  }

  static const char* value(const ::ros_arduino_msgs::DigitalRead&) { return value(); }
};

template<>
struct DataType< ::ros_arduino_msgs::DigitalRead > {
  static const char* value()
  {
    return "ros_arduino_msgs/DigitalRead";
  }

  static const char* value(const ::ros_arduino_msgs::DigitalRead&) { return value(); }
};


// service_traits::MD5Sum< ::ros_arduino_msgs::DigitalReadRequest> should match 
// service_traits::MD5Sum< ::ros_arduino_msgs::DigitalRead > 
template<>
struct MD5Sum< ::ros_arduino_msgs::DigitalReadRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_arduino_msgs::DigitalRead >::value();
  }
  static const char* value(const ::ros_arduino_msgs::DigitalReadRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_arduino_msgs::DigitalReadRequest> should match 
// service_traits::DataType< ::ros_arduino_msgs::DigitalRead > 
template<>
struct DataType< ::ros_arduino_msgs::DigitalReadRequest>
{
  static const char* value()
  {
    return DataType< ::ros_arduino_msgs::DigitalRead >::value();
  }
  static const char* value(const ::ros_arduino_msgs::DigitalReadRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_arduino_msgs::DigitalReadResponse> should match 
// service_traits::MD5Sum< ::ros_arduino_msgs::DigitalRead > 
template<>
struct MD5Sum< ::ros_arduino_msgs::DigitalReadResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_arduino_msgs::DigitalRead >::value();
  }
  static const char* value(const ::ros_arduino_msgs::DigitalReadResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_arduino_msgs::DigitalReadResponse> should match 
// service_traits::DataType< ::ros_arduino_msgs::DigitalRead > 
template<>
struct DataType< ::ros_arduino_msgs::DigitalReadResponse>
{
  static const char* value()
  {
    return DataType< ::ros_arduino_msgs::DigitalRead >::value();
  }
  static const char* value(const ::ros_arduino_msgs::DigitalReadResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_DIGITALREAD_H
