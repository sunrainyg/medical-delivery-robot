// Generated by gencpp from file waterplus_map_tools/GetNumOfWaypointsResponse.msg
// DO NOT EDIT!


#ifndef WATERPLUS_MAP_TOOLS_MESSAGE_GETNUMOFWAYPOINTSRESPONSE_H
#define WATERPLUS_MAP_TOOLS_MESSAGE_GETNUMOFWAYPOINTSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace waterplus_map_tools
{
template <class ContainerAllocator>
struct GetNumOfWaypointsResponse_
{
  typedef GetNumOfWaypointsResponse_<ContainerAllocator> Type;

  GetNumOfWaypointsResponse_()
    : num(0)  {
    }
  GetNumOfWaypointsResponse_(const ContainerAllocator& _alloc)
    : num(0)  {
  (void)_alloc;
    }



   typedef int32_t _num_type;
  _num_type num;





  typedef boost::shared_ptr< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetNumOfWaypointsResponse_

typedef ::waterplus_map_tools::GetNumOfWaypointsResponse_<std::allocator<void> > GetNumOfWaypointsResponse;

typedef boost::shared_ptr< ::waterplus_map_tools::GetNumOfWaypointsResponse > GetNumOfWaypointsResponsePtr;
typedef boost::shared_ptr< ::waterplus_map_tools::GetNumOfWaypointsResponse const> GetNumOfWaypointsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace waterplus_map_tools

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'waterplus_map_tools': ['/home/rosfun/catkin_ws/src/waterplus_map_tools/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "54b3c80efd6fae6e6ffff8a4b9facd69";
  }

  static const char* value(const ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x54b3c80efd6fae6eULL;
  static const uint64_t static_value2 = 0x6ffff8a4b9facd69ULL;
};

template<class ContainerAllocator>
struct DataType< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "waterplus_map_tools/GetNumOfWaypointsResponse";
  }

  static const char* value(const ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 num\n\
";
  }

  static const char* value(const ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetNumOfWaypointsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::waterplus_map_tools::GetNumOfWaypointsResponse_<ContainerAllocator>& v)
  {
    s << indent << "num: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WATERPLUS_MAP_TOOLS_MESSAGE_GETNUMOFWAYPOINTSRESPONSE_H
