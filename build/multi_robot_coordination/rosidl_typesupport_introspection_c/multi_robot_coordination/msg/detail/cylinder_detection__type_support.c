// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from multi_robot_coordination:msg/CylinderDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "multi_robot_coordination/msg/detail/cylinder_detection__rosidl_typesupport_introspection_c.h"
#include "multi_robot_coordination/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "multi_robot_coordination/msg/detail/cylinder_detection__functions.h"
#include "multi_robot_coordination/msg/detail/cylinder_detection__struct.h"


// Include directives for member types
// Member `robot_namespace`
#include "rosidl_runtime_c/string_functions.h"
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  multi_robot_coordination__msg__CylinderDetection__init(message_memory);
}

void multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_fini_function(void * message_memory)
{
  multi_robot_coordination__msg__CylinderDetection__fini(message_memory);
}

size_t multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__size_function__CylinderDetection__xyxy(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__get_const_function__CylinderDetection__xyxy(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__get_function__CylinderDetection__xyxy(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__fetch_function__CylinderDetection__xyxy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__get_const_function__CylinderDetection__xyxy(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__assign_function__CylinderDetection__xyxy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__get_function__CylinderDetection__xyxy(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_message_member_array[15] = {
  {
    "detected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, detected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_namespace",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, robot_namespace),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "u",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, u),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xyxy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, xyxy),  // bytes offset in struct
    NULL,  // default value
    multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__size_function__CylinderDetection__xyxy,  // size() function pointer
    multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__get_const_function__CylinderDetection__xyxy,  // get_const(index) function pointer
    multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__get_function__CylinderDetection__xyxy,  // get(index) function pointer
    multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__fetch_function__CylinderDetection__xyxy,  // fetch(index, &value) function pointer
    multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__assign_function__CylinderDetection__xyxy,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, x_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, y_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, x_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, y_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, image_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(multi_robot_coordination__msg__CylinderDetection, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_message_members = {
  "multi_robot_coordination__msg",  // message namespace
  "CylinderDetection",  // message name
  15,  // number of fields
  sizeof(multi_robot_coordination__msg__CylinderDetection),
  multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_message_member_array,  // message members
  multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_message_type_support_handle = {
  0,
  &multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_multi_robot_coordination
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, multi_robot_coordination, msg, CylinderDetection)() {
  multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_message_type_support_handle.typesupport_identifier) {
    multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &multi_robot_coordination__msg__CylinderDetection__rosidl_typesupport_introspection_c__CylinderDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
