// Generated by gencpp from file stroll_bearnav/loadMapGoal.msg
// DO NOT EDIT!


#ifndef STROLL_BEARNAV_MESSAGE_LOADMAPGOAL_H
#define STROLL_BEARNAV_MESSAGE_LOADMAPGOAL_H


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
struct loadMapGoal_
{
  typedef loadMapGoal_<ContainerAllocator> Type;

  loadMapGoal_()
    : prefix()  {
    }
  loadMapGoal_(const ContainerAllocator& _alloc)
    : prefix(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _prefix_type;
  _prefix_type prefix;





  typedef boost::shared_ptr< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> const> ConstPtr;

}; // struct loadMapGoal_

typedef ::stroll_bearnav::loadMapGoal_<std::allocator<void> > loadMapGoal;

typedef boost::shared_ptr< ::stroll_bearnav::loadMapGoal > loadMapGoalPtr;
typedef boost::shared_ptr< ::stroll_bearnav::loadMapGoal const> loadMapGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stroll_bearnav::loadMapGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8a471f61d96890d8f43bc26d6b147ee7";
  }

  static const char* value(const ::stroll_bearnav::loadMapGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8a471f61d96890d8ULL;
  static const uint64_t static_value2 = 0xf43bc26d6b147ee7ULL;
};

template<class ContainerAllocator>
struct DataType< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stroll_bearnav/loadMapGoal";
  }

  static const char* value(const ::stroll_bearnav::loadMapGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definiton\n\
string prefix \n\
";
  }

  static const char* value(const ::stroll_bearnav::loadMapGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.prefix);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct loadMapGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stroll_bearnav::loadMapGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stroll_bearnav::loadMapGoal_<ContainerAllocator>& v)
  {
    s << indent << "prefix: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.prefix);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STROLL_BEARNAV_MESSAGE_LOADMAPGOAL_H
