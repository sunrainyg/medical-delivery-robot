// Generated by gencpp from file ros_arduino_msgs/LightShowRequest.msg
// DO NOT EDIT!


#ifndef ROS_ARDUINO_MSGS_MESSAGE_LIGHTSHOWREQUEST_H
#define ROS_ARDUINO_MSGS_MESSAGE_LIGHTSHOWREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_arduino_msgs
{
template <class ContainerAllocator>
struct LightShowRequest_
{
  typedef LightShowRequest_<ContainerAllocator> Type;

  LightShowRequest_()
    : value(0)  {
    }
  LightShowRequest_(const ContainerAllocator& _alloc)
    : value(0)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LightShowRequest_

typedef ::ros_arduino_msgs::LightShowRequest_<std::allocator<void> > LightShowRequest;

typedef boost::shared_ptr< ::ros_arduino_msgs::LightShowRequest > LightShowRequestPtr;
typedef boost::shared_ptr< ::ros_arduino_msgs::LightShowRequest const> LightShowRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_arduino_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ros_arduino_msgs': ['/home/rosfun/catkin_ws/src/ros_arduino_bridge/ros_arduino_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e4da51e86d3bac963ee2bb1f41031407";
  }

  static const char* value(const ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe4da51e86d3bac96ULL;
  static const uint64_t static_value2 = 0x3ee2bb1f41031407ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_arduino_msgs/LightShowRequest";
  }

  static const char* value(const ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 value\n\
\n\
";
  }

  static const char* value(const ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LightShowRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_arduino_msgs::LightShowRequest_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ARDUINO_MSGS_MESSAGE_LIGHTSHOWREQUEST_H
