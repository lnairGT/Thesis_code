// Generated by gencpp from file rail_manipulation_msgs/PrimitiveResult.msg
// DO NOT EDIT!


#ifndef RAIL_MANIPULATION_MSGS_MESSAGE_PRIMITIVERESULT_H
#define RAIL_MANIPULATION_MSGS_MESSAGE_PRIMITIVERESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rail_manipulation_msgs
{
template <class ContainerAllocator>
struct PrimitiveResult_
{
  typedef PrimitiveResult_<ContainerAllocator> Type;

  PrimitiveResult_()
    : completion(0.0)  {
    }
  PrimitiveResult_(const ContainerAllocator& _alloc)
    : completion(0.0)  {
  (void)_alloc;
    }



   typedef double _completion_type;
  _completion_type completion;




  typedef boost::shared_ptr< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> const> ConstPtr;

}; // struct PrimitiveResult_

typedef ::rail_manipulation_msgs::PrimitiveResult_<std::allocator<void> > PrimitiveResult;

typedef boost::shared_ptr< ::rail_manipulation_msgs::PrimitiveResult > PrimitiveResultPtr;
typedef boost::shared_ptr< ::rail_manipulation_msgs::PrimitiveResult const> PrimitiveResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rail_manipulation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rail_manipulation_msgs': ['/home/lnair3/Nimbus_ws/src/rail_manipulation_msgs/msg', '/home/lnair3/Nimbus_ws/devel/share/rail_manipulation_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "625ff476bf5a3a8ab489ab09eae43fe9";
  }

  static const char* value(const ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x625ff476bf5a3a8aULL;
  static const uint64_t static_value2 = 0xb489ab09eae43fe9ULL;
};

template<class ContainerAllocator>
struct DataType< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rail_manipulation_msgs/PrimitiveResult";
  }

  static const char* value(const ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the result\n\
float64 completion      # percentage of the primitive action completed\n\
";
  }

  static const char* value(const ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.completion);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PrimitiveResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rail_manipulation_msgs::PrimitiveResult_<ContainerAllocator>& v)
  {
    s << indent << "completion: ";
    Printer<double>::stream(s, indent + "  ", v.completion);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAIL_MANIPULATION_MSGS_MESSAGE_PRIMITIVERESULT_H
