// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multi_robot_coordination:msg/CylinderDetection.idl
// generated code does not contain a copyright notice

#ifndef MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION__BUILDER_HPP_
#define MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multi_robot_coordination/msg/detail/cylinder_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multi_robot_coordination
{

namespace msg
{

namespace builder
{

class Init_CylinderDetection_header
{
public:
  explicit Init_CylinderDetection_header(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  ::multi_robot_coordination::msg::CylinderDetection header(::multi_robot_coordination::msg::CylinderDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_image_width
{
public:
  explicit Init_CylinderDetection_image_width(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_header image_width(::multi_robot_coordination::msg::CylinderDetection::_image_width_type arg)
  {
    msg_.image_width = std::move(arg);
    return Init_CylinderDetection_header(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_y_max
{
public:
  explicit Init_CylinderDetection_y_max(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_image_width y_max(::multi_robot_coordination::msg::CylinderDetection::_y_max_type arg)
  {
    msg_.y_max = std::move(arg);
    return Init_CylinderDetection_image_width(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_x_max
{
public:
  explicit Init_CylinderDetection_x_max(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_y_max x_max(::multi_robot_coordination::msg::CylinderDetection::_x_max_type arg)
  {
    msg_.x_max = std::move(arg);
    return Init_CylinderDetection_y_max(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_y_min
{
public:
  explicit Init_CylinderDetection_y_min(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_x_max y_min(::multi_robot_coordination::msg::CylinderDetection::_y_min_type arg)
  {
    msg_.y_min = std::move(arg);
    return Init_CylinderDetection_x_max(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_x_min
{
public:
  explicit Init_CylinderDetection_x_min(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_y_min x_min(::multi_robot_coordination::msg::CylinderDetection::_x_min_type arg)
  {
    msg_.x_min = std::move(arg);
    return Init_CylinderDetection_y_min(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_xyxy
{
public:
  explicit Init_CylinderDetection_xyxy(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_x_min xyxy(::multi_robot_coordination::msg::CylinderDetection::_xyxy_type arg)
  {
    msg_.xyxy = std::move(arg);
    return Init_CylinderDetection_x_min(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_confidence
{
public:
  explicit Init_CylinderDetection_confidence(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_xyxy confidence(::multi_robot_coordination::msg::CylinderDetection::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_CylinderDetection_xyxy(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_v
{
public:
  explicit Init_CylinderDetection_v(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_confidence v(::multi_robot_coordination::msg::CylinderDetection::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_CylinderDetection_confidence(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_u
{
public:
  explicit Init_CylinderDetection_u(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_v u(::multi_robot_coordination::msg::CylinderDetection::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_CylinderDetection_v(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_z
{
public:
  explicit Init_CylinderDetection_z(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_u z(::multi_robot_coordination::msg::CylinderDetection::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_CylinderDetection_u(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_y
{
public:
  explicit Init_CylinderDetection_y(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_z y(::multi_robot_coordination::msg::CylinderDetection::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CylinderDetection_z(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_x
{
public:
  explicit Init_CylinderDetection_x(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_y x(::multi_robot_coordination::msg::CylinderDetection::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CylinderDetection_y(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_robot_namespace
{
public:
  explicit Init_CylinderDetection_robot_namespace(::multi_robot_coordination::msg::CylinderDetection & msg)
  : msg_(msg)
  {}
  Init_CylinderDetection_x robot_namespace(::multi_robot_coordination::msg::CylinderDetection::_robot_namespace_type arg)
  {
    msg_.robot_namespace = std::move(arg);
    return Init_CylinderDetection_x(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

class Init_CylinderDetection_detected
{
public:
  Init_CylinderDetection_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CylinderDetection_robot_namespace detected(::multi_robot_coordination::msg::CylinderDetection::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_CylinderDetection_robot_namespace(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_robot_coordination::msg::CylinderDetection>()
{
  return multi_robot_coordination::msg::builder::Init_CylinderDetection_detected();
}

}  // namespace multi_robot_coordination

#endif  // MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION__BUILDER_HPP_
