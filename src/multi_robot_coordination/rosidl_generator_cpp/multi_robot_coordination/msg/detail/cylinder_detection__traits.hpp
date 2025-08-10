// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from multi_robot_coordination:msg/CylinderDetection.idl
// generated code does not contain a copyright notice

#ifndef MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION__TRAITS_HPP_
#define MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "multi_robot_coordination/msg/detail/cylinder_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace multi_robot_coordination
{

namespace msg
{

inline void to_flow_style_yaml(
  const CylinderDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: detected
  {
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << ", ";
  }

  // member: robot_namespace
  {
    out << "robot_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_namespace, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: u
  {
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << ", ";
  }

  // member: v
  {
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: xyxy
  {
    if (msg.xyxy.size() == 0) {
      out << "xyxy: []";
    } else {
      out << "xyxy: [";
      size_t pending_items = msg.xyxy.size();
      for (auto item : msg.xyxy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x_min
  {
    out << "x_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min, out);
    out << ", ";
  }

  // member: y_min
  {
    out << "y_min: ";
    rosidl_generator_traits::value_to_yaml(msg.y_min, out);
    out << ", ";
  }

  // member: x_max
  {
    out << "x_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max, out);
    out << ", ";
  }

  // member: y_max
  {
    out << "y_max: ";
    rosidl_generator_traits::value_to_yaml(msg.y_max, out);
    out << ", ";
  }

  // member: image_width
  {
    out << "image_width: ";
    rosidl_generator_traits::value_to_yaml(msg.image_width, out);
    out << ", ";
  }

  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CylinderDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected: ";
    rosidl_generator_traits::value_to_yaml(msg.detected, out);
    out << "\n";
  }

  // member: robot_namespace
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_namespace: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_namespace, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "u: ";
    rosidl_generator_traits::value_to_yaml(msg.u, out);
    out << "\n";
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    rosidl_generator_traits::value_to_yaml(msg.v, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: xyxy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.xyxy.size() == 0) {
      out << "xyxy: []\n";
    } else {
      out << "xyxy:\n";
      for (auto item : msg.xyxy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_min, out);
    out << "\n";
  }

  // member: y_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_min: ";
    rosidl_generator_traits::value_to_yaml(msg.y_min, out);
    out << "\n";
  }

  // member: x_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_max, out);
    out << "\n";
  }

  // member: y_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_max: ";
    rosidl_generator_traits::value_to_yaml(msg.y_max, out);
    out << "\n";
  }

  // member: image_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_width: ";
    rosidl_generator_traits::value_to_yaml(msg.image_width, out);
    out << "\n";
  }

  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CylinderDetection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace multi_robot_coordination

namespace rosidl_generator_traits
{

[[deprecated("use multi_robot_coordination::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const multi_robot_coordination::msg::CylinderDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  multi_robot_coordination::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use multi_robot_coordination::msg::to_yaml() instead")]]
inline std::string to_yaml(const multi_robot_coordination::msg::CylinderDetection & msg)
{
  return multi_robot_coordination::msg::to_yaml(msg);
}

template<>
inline const char * data_type<multi_robot_coordination::msg::CylinderDetection>()
{
  return "multi_robot_coordination::msg::CylinderDetection";
}

template<>
inline const char * name<multi_robot_coordination::msg::CylinderDetection>()
{
  return "multi_robot_coordination/msg/CylinderDetection";
}

template<>
struct has_fixed_size<multi_robot_coordination::msg::CylinderDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<multi_robot_coordination::msg::CylinderDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<multi_robot_coordination::msg::CylinderDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION__TRAITS_HPP_
