// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from multi_robot_coordination:msg/CylinderDetectionMulti.idl
// generated code does not contain a copyright notice

#ifndef MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "multi_robot_coordination/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "multi_robot_coordination/msg/detail/cylinder_detection_multi__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace multi_robot_coordination
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_robot_coordination
cdr_serialize(
  const multi_robot_coordination::msg::CylinderDetectionMulti & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_robot_coordination
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  multi_robot_coordination::msg::CylinderDetectionMulti & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_robot_coordination
get_serialized_size(
  const multi_robot_coordination::msg::CylinderDetectionMulti & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_robot_coordination
max_serialized_size_CylinderDetectionMulti(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace multi_robot_coordination

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_multi_robot_coordination
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, multi_robot_coordination, msg, CylinderDetectionMulti)();

#ifdef __cplusplus
}
#endif

#endif  // MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
