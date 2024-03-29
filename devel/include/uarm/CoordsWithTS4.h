// Generated by gencpp from file uarm/CoordsWithTS4.msg
// DO NOT EDIT!


#ifndef UARM_MESSAGE_COORDSWITHTS4_H
#define UARM_MESSAGE_COORDSWITHTS4_H


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
struct CoordsWithTS4_
{
  typedef CoordsWithTS4_<ContainerAllocator> Type;

  CoordsWithTS4_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , time(0)
    , servo_4(0)  {
    }
  CoordsWithTS4_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , time(0)
    , servo_4(0)  {
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

   typedef uint8_t _servo_4_type;
  _servo_4_type servo_4;





  typedef boost::shared_ptr< ::uarm::CoordsWithTS4_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uarm::CoordsWithTS4_<ContainerAllocator> const> ConstPtr;

}; // struct CoordsWithTS4_

typedef ::uarm::CoordsWithTS4_<std::allocator<void> > CoordsWithTS4;

typedef boost::shared_ptr< ::uarm::CoordsWithTS4 > CoordsWithTS4Ptr;
typedef boost::shared_ptr< ::uarm::CoordsWithTS4 const> CoordsWithTS4ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uarm::CoordsWithTS4_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uarm::CoordsWithTS4_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::uarm::CoordsWithTS4_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uarm::CoordsWithTS4_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uarm::CoordsWithTS4_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uarm::CoordsWithTS4_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uarm::CoordsWithTS4_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uarm::CoordsWithTS4_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uarm::CoordsWithTS4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d591a4c1754daa954bee92aa3a0cadd7";
  }

  static const char* value(const ::uarm::CoordsWithTS4_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd591a4c1754daa95ULL;
  static const uint64_t static_value2 = 0x4bee92aa3a0cadd7ULL;
};

template<class ContainerAllocator>
struct DataType< ::uarm::CoordsWithTS4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uarm/CoordsWithTS4";
  }

  static const char* value(const ::uarm::CoordsWithTS4_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uarm::CoordsWithTS4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 z\n\
uint8 time\n\
uint8 servo_4\n\
";
  }

  static const char* value(const ::uarm::CoordsWithTS4_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uarm::CoordsWithTS4_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.time);
      stream.next(m.servo_4);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CoordsWithTS4_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uarm::CoordsWithTS4_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uarm::CoordsWithTS4_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "time: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.time);
    s << indent << "servo_4: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.servo_4);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UARM_MESSAGE_COORDSWITHTS4_H
