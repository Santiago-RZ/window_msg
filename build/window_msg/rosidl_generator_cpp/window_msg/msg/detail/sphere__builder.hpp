// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from window_msg:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef WINDOW_MSG__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define WINDOW_MSG__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "window_msg/msg/detail/sphere__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace window_msg
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::window_msg::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::window_msg::msg::Sphere radius(::window_msg::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::window_msg::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::window_msg::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::window_msg::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::window_msg::msg::Sphere>()
{
  return window_msg::msg::builder::Init_Sphere_center();
}

}  // namespace window_msg

#endif  // WINDOW_MSG__MSG__DETAIL__SPHERE__BUILDER_HPP_
