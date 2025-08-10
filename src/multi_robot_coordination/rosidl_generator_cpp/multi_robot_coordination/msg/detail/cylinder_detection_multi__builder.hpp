// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from multi_robot_coordination:msg/CylinderDetectionMulti.idl
// generated code does not contain a copyright notice

#ifndef MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__BUILDER_HPP_
#define MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "multi_robot_coordination/msg/detail/cylinder_detection_multi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace multi_robot_coordination
{

namespace msg
{

namespace builder
{

class Init_CylinderDetectionMulti_header
{
public:
  explicit Init_CylinderDetectionMulti_header(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  ::multi_robot_coordination::msg::CylinderDetectionMulti header(::multi_robot_coordination::msg::CylinderDetectionMulti::_header_type arg)
  {
    msg_.header = std::move(arg);
    return std::move(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_target_namespace
{
public:
  explicit Init_CylinderDetectionMulti_target_namespace(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_header target_namespace(::multi_robot_coordination::msg::CylinderDetectionMulti::_target_namespace_type arg)
  {
    msg_.target_namespace = std::move(arg);
    return Init_CylinderDetectionMulti_header(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_image_width
{
public:
  explicit Init_CylinderDetectionMulti_image_width(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_target_namespace image_width(::multi_robot_coordination::msg::CylinderDetectionMulti::_image_width_type arg)
  {
    msg_.image_width = std::move(arg);
    return Init_CylinderDetectionMulti_target_namespace(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_y_max
{
public:
  explicit Init_CylinderDetectionMulti_y_max(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_image_width y_max(::multi_robot_coordination::msg::CylinderDetectionMulti::_y_max_type arg)
  {
    msg_.y_max = std::move(arg);
    return Init_CylinderDetectionMulti_image_width(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_x_max
{
public:
  explicit Init_CylinderDetectionMulti_x_max(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_y_max x_max(::multi_robot_coordination::msg::CylinderDetectionMulti::_x_max_type arg)
  {
    msg_.x_max = std::move(arg);
    return Init_CylinderDetectionMulti_y_max(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_y_min
{
public:
  explicit Init_CylinderDetectionMulti_y_min(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_x_max y_min(::multi_robot_coordination::msg::CylinderDetectionMulti::_y_min_type arg)
  {
    msg_.y_min = std::move(arg);
    return Init_CylinderDetectionMulti_x_max(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_x_min
{
public:
  explicit Init_CylinderDetectionMulti_x_min(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_y_min x_min(::multi_robot_coordination::msg::CylinderDetectionMulti::_x_min_type arg)
  {
    msg_.x_min = std::move(arg);
    return Init_CylinderDetectionMulti_y_min(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_xyxy
{
public:
  explicit Init_CylinderDetectionMulti_xyxy(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_x_min xyxy(::multi_robot_coordination::msg::CylinderDetectionMulti::_xyxy_type arg)
  {
    msg_.xyxy = std::move(arg);
    return Init_CylinderDetectionMulti_x_min(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_confidence
{
public:
  explicit Init_CylinderDetectionMulti_confidence(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_xyxy confidence(::multi_robot_coordination::msg::CylinderDetectionMulti::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_CylinderDetectionMulti_xyxy(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_v
{
public:
  explicit Init_CylinderDetectionMulti_v(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_confidence v(::multi_robot_coordination::msg::CylinderDetectionMulti::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_CylinderDetectionMulti_confidence(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_u
{
public:
  explicit Init_CylinderDetectionMulti_u(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_v u(::multi_robot_coordination::msg::CylinderDetectionMulti::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_CylinderDetectionMulti_v(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_z
{
public:
  explicit Init_CylinderDetectionMulti_z(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_u z(::multi_robot_coordination::msg::CylinderDetectionMulti::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_CylinderDetectionMulti_u(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_y
{
public:
  explicit Init_CylinderDetectionMulti_y(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_z y(::multi_robot_coordination::msg::CylinderDetectionMulti::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CylinderDetectionMulti_z(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_x
{
public:
  explicit Init_CylinderDetectionMulti_x(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_y x(::multi_robot_coordination::msg::CylinderDetectionMulti::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CylinderDetectionMulti_y(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_robot_namespace
{
public:
  explicit Init_CylinderDetectionMulti_robot_namespace(::multi_robot_coordination::msg::CylinderDetectionMulti & msg)
  : msg_(msg)
  {}
  Init_CylinderDetectionMulti_x robot_namespace(::multi_robot_coordination::msg::CylinderDetectionMulti::_robot_namespace_type arg)
  {
    msg_.robot_namespace = std::move(arg);
    return Init_CylinderDetectionMulti_x(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

class Init_CylinderDetectionMulti_detected
{
public:
  Init_CylinderDetectionMulti_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CylinderDetectionMulti_robot_namespace detected(::multi_robot_coordination::msg::CylinderDetectionMulti::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_CylinderDetectionMulti_robot_namespace(msg_);
  }

private:
  ::multi_robot_coordination::msg::CylinderDetectionMulti msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::multi_robot_coordination::msg::CylinderDetectionMulti>()
{
  return multi_robot_coordination::msg::builder::Init_CylinderDetectionMulti_detected();
}

}  // namespace multi_robot_coordination

#endif  // MULTI_ROBOT_COORDINATION__MSG__DETAIL__CYLINDER_DETECTION_MULTI__BUILDER_HPP_
