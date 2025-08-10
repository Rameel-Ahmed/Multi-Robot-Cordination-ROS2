// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from multi_robot_coordination:msg/CylinderDetectionMulti.idl
// generated code does not contain a copyright notice

#ifndef MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__STRUCT_H_
#define MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_namespace'
// Member 'target_namespace'
#include "rosidl_runtime_c/string.h"
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/CylinderDetectionMulti in the package multi_robot_coordination.
typedef struct multi_robot_coordination__msg__CylinderDetectionMulti
{
  bool detected;
  rosidl_runtime_c__String robot_namespace;
  double x;
  double y;
  double z;
  double u;
  double v;
  double confidence;
  double xyxy[4];
  double x_min;
  double y_min;
  double x_max;
  double y_max;
  double image_width;
  rosidl_runtime_c__String target_namespace;
  std_msgs__msg__Header header;
} multi_robot_coordination__msg__CylinderDetectionMulti;

// Struct for a sequence of multi_robot_coordination__msg__CylinderDetectionMulti.
typedef struct multi_robot_coordination__msg__CylinderDetectionMulti__Sequence
{
  multi_robot_coordination__msg__CylinderDetectionMulti * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} multi_robot_coordination__msg__CylinderDetectionMulti__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__STRUCT_H_
