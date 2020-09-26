// Generated by gencpp from file rail_manipulation_msgs/PrimitiveActionGoal.msg
// DO NOT EDIT!


#ifndef RAIL_MANIPULATION_MSGS_MESSAGE_PRIMITIVEACTIONGOAL_H
#define RAIL_MANIPULATION_MSGS_MESSAGE_PRIMITIVEACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <rail_manipulation_msgs/PrimitiveGoal.h>

namespace rail_manipulation_msgs
{
template <class ContainerAllocator>
struct PrimitiveActionGoal_
{
  typedef PrimitiveActionGoal_<ContainerAllocator> Type;

  PrimitiveActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  PrimitiveActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::rail_manipulation_msgs::PrimitiveGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;




  typedef boost::shared_ptr< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct PrimitiveActionGoal_

typedef ::rail_manipulation_msgs::PrimitiveActionGoal_<std::allocator<void> > PrimitiveActionGoal;

typedef boost::shared_ptr< ::rail_manipulation_msgs::PrimitiveActionGoal > PrimitiveActionGoalPtr;
typedef boost::shared_ptr< ::rail_manipulation_msgs::PrimitiveActionGoal const> PrimitiveActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rail_manipulation_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rail_manipulation_msgs': ['/home/lnair3/Nimbus_ws/src/rail_manipulation_msgs/msg', '/home/lnair3/Nimbus_ws/devel/share/rail_manipulation_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "04b33ca4ff71c06788401fb70bb764d2";
  }

  static const char* value(const ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x04b33ca4ff71c067ULL;
  static const uint64_t static_value2 = 0x88401fb70bb764d2ULL;
};

template<class ContainerAllocator>
struct DataType< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rail_manipulation_msgs/PrimitiveActionGoal";
  }

  static const char* value(const ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
PrimitiveGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: rail_manipulation_msgs/PrimitiveGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
\n\
#actions\n\
uint8 TRANSLATION=0\n\
uint8 ROTATION=1\n\
\n\
#axes\n\
uint8 X_AXIS=0\n\
uint8 Y_AXIS=1\n\
uint8 Z_AXIS=2\n\
\n\
uint8 primitive_type    # type of primitive action\n\
uint8 axis              # axis of translation/rotation\n\
float64 distance        # distance to perform the action (in m or rad)\n\
";
  }

  static const char* value(const ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PrimitiveActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rail_manipulation_msgs::PrimitiveActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::rail_manipulation_msgs::PrimitiveGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAIL_MANIPULATION_MSGS_MESSAGE_PRIMITIVEACTIONGOAL_H
