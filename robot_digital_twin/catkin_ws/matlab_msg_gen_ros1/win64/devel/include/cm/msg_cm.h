// Generated by gencpp from file cm/msg_cm.msg
// DO NOT EDIT!


#ifndef CM_MESSAGE_MSG_CM_H
#define CM_MESSAGE_MSG_CM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace cm
{
template <class ContainerAllocator>
struct msg_cm_
{
  typedef msg_cm_<ContainerAllocator> Type;

  msg_cm_()
    : header()
    , name()
    , position()
    , temperature()
    , voltage()  {
    }
  msg_cm_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , name(_alloc)
    , position(_alloc)
    , temperature(_alloc)
    , voltage(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  _name_type name;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_type;
  _position_type position;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _temperature_type;
  _temperature_type temperature;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _voltage_type;
  _voltage_type voltage;





  typedef boost::shared_ptr< ::cm::msg_cm_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cm::msg_cm_<ContainerAllocator> const> ConstPtr;

}; // struct msg_cm_

typedef ::cm::msg_cm_<std::allocator<void> > msg_cm;

typedef boost::shared_ptr< ::cm::msg_cm > msg_cmPtr;
typedef boost::shared_ptr< ::cm::msg_cm const> msg_cmConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cm::msg_cm_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cm::msg_cm_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cm::msg_cm_<ContainerAllocator1> & lhs, const ::cm::msg_cm_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.name == rhs.name &&
    lhs.position == rhs.position &&
    lhs.temperature == rhs.temperature &&
    lhs.voltage == rhs.voltage;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cm::msg_cm_<ContainerAllocator1> & lhs, const ::cm::msg_cm_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::cm::msg_cm_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cm::msg_cm_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cm::msg_cm_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cm::msg_cm_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cm::msg_cm_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cm::msg_cm_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cm::msg_cm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "51e1ed7c5e784b847030fbe04b6e407c";
  }

  static const char* value(const ::cm::msg_cm_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x51e1ed7c5e784b84ULL;
  static const uint64_t static_value2 = 0x7030fbe04b6e407cULL;
};

template<class ContainerAllocator>
struct DataType< ::cm::msg_cm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cm/msg_cm";
  }

  static const char* value(const ::cm::msg_cm_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cm::msg_cm_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string[] name         # joint name\n"
"float64[] position # motor position, same order as name\n"
"float64[] temperature # motor temperatures, same order as name\n"
"float64[] voltage # motor voltage, same order as name\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::cm::msg_cm_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cm::msg_cm_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.name);
      stream.next(m.position);
      stream.next(m.temperature);
      stream.next(m.voltage);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct msg_cm_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cm::msg_cm_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cm::msg_cm_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "temperature[]" << std::endl;
    for (size_t i = 0; i < v.temperature.size(); ++i)
    {
      s << indent << "  temperature[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.temperature[i]);
    }
    s << indent << "voltage[]" << std::endl;
    for (size_t i = 0; i < v.voltage.size(); ++i)
    {
      s << indent << "  voltage[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.voltage[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CM_MESSAGE_MSG_CM_H
