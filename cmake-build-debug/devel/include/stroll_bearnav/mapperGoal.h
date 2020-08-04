// Generated by gencpp from file stroll_bearnav/mapperGoal.msg
// DO NOT EDIT!


#ifndef STROLL_BEARNAV_MESSAGE_MAPPERGOAL_H
#define STROLL_BEARNAV_MESSAGE_MAPPERGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace stroll_bearnav
{
template <class ContainerAllocator>
struct mapperGoal_
{
  typedef mapperGoal_<ContainerAllocator> Type;

  mapperGoal_()
    : fileName()  {
    }
  mapperGoal_(const ContainerAllocator& _alloc)
    : fileName(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _fileName_type;
  _fileName_type fileName;





  typedef boost::shared_ptr< ::stroll_bearnav::mapperGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stroll_bearnav::mapperGoal_<ContainerAllocator> const> ConstPtr;

}; // struct mapperGoal_

typedef ::stroll_bearnav::mapperGoal_<std::allocator<void> > mapperGoal;

typedef boost::shared_ptr< ::stroll_bearnav::mapperGoal > mapperGoalPtr;
typedef boost::shared_ptr< ::stroll_bearnav::mapperGoal const> mapperGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stroll_bearnav::mapperGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stroll_bearnav::mapperGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stroll_bearnav

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'stroll_bearnav': ['/home/kevin/jaguar_ws/src/stroll_bearnav/msg', '/home/kevin/jaguar_ws/src/stroll_bearnav/cmake-build-debug/devel/share/stroll_bearnav/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stroll_bearnav::mapperGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stroll_bearnav::mapperGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stroll_bearnav::mapperGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stroll_bearnav::mapperGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stroll_bearnav::mapperGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stroll_bearnav::mapperGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stroll_bearnav::mapperGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0c96d4662a80949a4927729271153923";
  }

  static const char* value(const ::stroll_bearnav::mapperGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0c96d4662a80949aULL;
  static const uint64_t static_value2 = 0x4927729271153923ULL;
};

template<class ContainerAllocator>
struct DataType< ::stroll_bearnav::mapperGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stroll_bearnav/mapperGoal";
  }

  static const char* value(const ::stroll_bearnav::mapperGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stroll_bearnav::mapperGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definiton\n\
string fileName\n\
";
  }

  static const char* value(const ::stroll_bearnav::mapperGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stroll_bearnav::mapperGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fileName);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mapperGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stroll_bearnav::mapperGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stroll_bearnav::mapperGoal_<ContainerAllocator>& v)
  {
    s << indent << "fileName: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.fileName);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STROLL_BEARNAV_MESSAGE_MAPPERGOAL_H
