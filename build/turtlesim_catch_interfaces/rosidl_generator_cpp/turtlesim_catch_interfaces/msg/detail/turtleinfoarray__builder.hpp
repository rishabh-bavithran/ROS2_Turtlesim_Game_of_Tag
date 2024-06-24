// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_catch_interfaces:msg/Turtleinfoarray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__BUILDER_HPP_
#define TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_catch_interfaces/msg/detail/turtleinfoarray__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_catch_interfaces
{

namespace msg
{

namespace builder
{

class Init_Turtleinfoarray_turtles
{
public:
  Init_Turtleinfoarray_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_catch_interfaces::msg::Turtleinfoarray turtles(::turtlesim_catch_interfaces::msg::Turtleinfoarray::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_catch_interfaces::msg::Turtleinfoarray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_catch_interfaces::msg::Turtleinfoarray>()
{
  return turtlesim_catch_interfaces::msg::builder::Init_Turtleinfoarray_turtles();
}

}  // namespace turtlesim_catch_interfaces

#endif  // TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__BUILDER_HPP_
