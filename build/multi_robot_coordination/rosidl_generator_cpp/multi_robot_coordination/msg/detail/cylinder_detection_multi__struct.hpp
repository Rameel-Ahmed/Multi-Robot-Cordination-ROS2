// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multi_robot_coordination:msg/CylinderDetectionMulti.idl
// generated code does not contain a copyright notice

#ifndef MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__STRUCT_HPP_
#define MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_robot_coordination__msg__CylinderDetectionMulti __attribute__((deprecated))
#else
# define DEPRECATED__multi_robot_coordination__msg__CylinderDetectionMulti __declspec(deprecated)
#endif

namespace multi_robot_coordination
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CylinderDetectionMulti_
{
  using Type = CylinderDetectionMulti_<ContainerAllocator>;

  explicit CylinderDetectionMulti_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->robot_namespace = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->u = 0.0;
      this->v = 0.0;
      this->confidence = 0.0;
      std::fill<typename std::array<double, 4>::iterator, double>(this->xyxy.begin(), this->xyxy.end(), 0.0);
      this->x_min = 0.0;
      this->y_min = 0.0;
      this->x_max = 0.0;
      this->y_max = 0.0;
      this->image_width = 0.0;
      this->target_namespace = "";
    }
  }

  explicit CylinderDetectionMulti_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_namespace(_alloc),
    xyxy(_alloc),
    target_namespace(_alloc),
    header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->robot_namespace = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->u = 0.0;
      this->v = 0.0;
      this->confidence = 0.0;
      std::fill<typename std::array<double, 4>::iterator, double>(this->xyxy.begin(), this->xyxy.end(), 0.0);
      this->x_min = 0.0;
      this->y_min = 0.0;
      this->x_max = 0.0;
      this->y_max = 0.0;
      this->image_width = 0.0;
      this->target_namespace = "";
    }
  }

  // field types and members
  using _detected_type =
    bool;
  _detected_type detected;
  using _robot_namespace_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_namespace_type robot_namespace;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _u_type =
    double;
  _u_type u;
  using _v_type =
    double;
  _v_type v;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _xyxy_type =
    std::array<double, 4>;
  _xyxy_type xyxy;
  using _x_min_type =
    double;
  _x_min_type x_min;
  using _y_min_type =
    double;
  _y_min_type y_min;
  using _x_max_type =
    double;
  _x_max_type x_max;
  using _y_max_type =
    double;
  _y_max_type y_max;
  using _image_width_type =
    double;
  _image_width_type image_width;
  using _target_namespace_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_namespace_type target_namespace;
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;

  // setters for named parameter idiom
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }
  Type & set__robot_namespace(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_namespace = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__u(
    const double & _arg)
  {
    this->u = _arg;
    return *this;
  }
  Type & set__v(
    const double & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__xyxy(
    const std::array<double, 4> & _arg)
  {
    this->xyxy = _arg;
    return *this;
  }
  Type & set__x_min(
    const double & _arg)
  {
    this->x_min = _arg;
    return *this;
  }
  Type & set__y_min(
    const double & _arg)
  {
    this->y_min = _arg;
    return *this;
  }
  Type & set__x_max(
    const double & _arg)
  {
    this->x_max = _arg;
    return *this;
  }
  Type & set__y_max(
    const double & _arg)
  {
    this->y_max = _arg;
    return *this;
  }
  Type & set__image_width(
    const double & _arg)
  {
    this->image_width = _arg;
    return *this;
  }
  Type & set__target_namespace(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_namespace = _arg;
    return *this;
  }
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_robot_coordination__msg__CylinderDetectionMulti
    std::shared_ptr<multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_robot_coordination__msg__CylinderDetectionMulti
    std::shared_ptr<multi_robot_coordination::msg::CylinderDetectionMulti_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CylinderDetectionMulti_ & other) const
  {
    if (this->detected != other.detected) {
      return false;
    }
    if (this->robot_namespace != other.robot_namespace) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->u != other.u) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->xyxy != other.xyxy) {
      return false;
    }
    if (this->x_min != other.x_min) {
      return false;
    }
    if (this->y_min != other.y_min) {
      return false;
    }
    if (this->x_max != other.x_max) {
      return false;
    }
    if (this->y_max != other.y_max) {
      return false;
    }
    if (this->image_width != other.image_width) {
      return false;
    }
    if (this->target_namespace != other.target_namespace) {
      return false;
    }
    if (this->header != other.header) {
      return false;
    }
    return true;
  }
  bool operator!=(const CylinderDetectionMulti_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CylinderDetectionMulti_

// alias to use template instance with default allocator
using CylinderDetectionMulti =
  multi_robot_coordination::msg::CylinderDetectionMulti_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multi_robot_coordination

#endif  // MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__STRUCT_HPP_
