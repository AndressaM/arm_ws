// Generated by gencpp from file uarm/CoordsWithTime.msg
// DO NOT EDIT!


#ifndef UARM_MESSAGE_COORDSWITHTIME_H
#define UARM_MESSAGE_COORDSWITHTIME_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uarm
{
template <class ContainerAllocator>
struct CoordsWithTime_
{
  typedef CoordsWithTime_<ContainerAllocator> Type;

  CoordsWithTime_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , time(0)  {
    }
  CoordsWithTime_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , time(0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef uint8_t _time_type;
  _time_type time;




  typedef boost::shared_ptr< ::uarm::CoordsWithTime_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uarm::CoordsWithTime_<ContainerAllocator> const> ConstPtr;

}; // struct CoordsWithTime_

typedef ::uarm::CoordsWithTime_<std::allocator<void> > CoordsWithTime;

typedef boost::shared_ptr< ::uarm::CoordsWithTime > CoordsWithTimePtr;
typedef boost::shared_ptr< ::uarm::CoordsWithTime const> CoordsWithTimeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uarm::CoordsWithTime_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uarm::CoordsWithTime_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uarm

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'uarm': ['/home/andressa/arm_ws/src/uarm/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uarm::CoordsWithTime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uarm::CoordsWithTime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uarm::CoordsWithTime_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uarm::CoordsWithTime_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uarm::CoordsWithTime_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uarm::CoordsWithTime_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uarm::CoordsWithTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b3627db2ce9496e2653c112694e2c5fa";
  }

  static const char* value(const ::uarm::CoordsWithTime_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb3627db2ce9496e2ULL;
  static const uint64_t static_value2 = 0x653c112694e2c5faULL;
};

template<class ContainerAllocator>
struct DataType< ::uarm::CoordsWithTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uarm/CoordsWithTime";
  }

  static const char* value(const ::uarm::CoordsWithTime_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uarm::CoordsWithTime_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 z\n\
uint8 time\n\
\n\
";
  }

  static const char* value(const ::uarm::CoordsWithTime_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uarm::CoordsWithTime_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CoordsWithTime_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uarm::CoordsWithTime_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uarm::CoordsWithTime_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "time: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UARM_MESSAGE_COORDSWITHTIME_H
