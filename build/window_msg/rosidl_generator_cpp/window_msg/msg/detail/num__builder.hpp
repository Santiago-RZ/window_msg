// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from window_msg:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef WINDOW_MSG__MSG__DETAIL__NUM__BUILDER_HPP_
#define WINDOW_MSG__MSG__DETAIL__NUM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "window_msg/msg/detail/num__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace window_msg
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::window_msg::msg::Num num(::window_msg::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::window_msg::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::window_msg::msg::Num>()
{
  return window_msg::msg::builder::Init_Num_num();
}

}  // namespace window_msg

#endif  // WINDOW_MSG__MSG__DETAIL__NUM__BUILDER_HPP_
