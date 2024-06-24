// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_catch_interfaces:msg/Turtleinfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFO__BUILDER_HPP_
#define TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_catch_interfaces/msg/detail/turtleinfo__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_catch_interfaces
{

namespace msg
{

namespace builder
{

class Init_Turtleinfo_theta
{
public:
  explicit Init_Turtleinfo_theta(::turtlesim_catch_interfaces::msg::Turtleinfo & msg)
  : msg_(msg)
  {}
  ::turtlesim_catch_interfaces::msg::Turtleinfo theta(::turtlesim_catch_interfaces::msg::Turtleinfo::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_catch_interfaces::msg::Turtleinfo msg_;
};

class Init_Turtleinfo_y
{
public:
  explicit Init_Turtleinfo_y(::turtlesim_catch_interfaces::msg::Turtleinfo & msg)
  : msg_(msg)
  {}
  Init_Turtleinfo_theta y(::turtlesim_catch_interfaces::msg::Turtleinfo::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Turtleinfo_theta(msg_);
  }

private:
  ::turtlesim_catch_interfaces::msg::Turtleinfo msg_;
};

class Init_Turtleinfo_x
{
public:
  explicit Init_Turtleinfo_x(::turtlesim_catch_interfaces::msg::Turtleinfo & msg)
  : msg_(msg)
  {}
  Init_Turtleinfo_y x(::turtlesim_catch_interfaces::msg::Turtleinfo::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Turtleinfo_y(msg_);
  }

private:
  ::turtlesim_catch_interfaces::msg::Turtleinfo msg_;
};

class Init_Turtleinfo_name
{
public:
  Init_Turtleinfo_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtleinfo_x name(::turtlesim_catch_interfaces::msg::Turtleinfo::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Turtleinfo_x(msg_);
  }

private:
  ::turtlesim_catch_interfaces::msg::Turtleinfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_catch_interfaces::msg::Turtleinfo>()
{
  return turtlesim_catch_interfaces::msg::builder::Init_Turtleinfo_name();
}

}  // namespace turtlesim_catch_interfaces

#endif  // TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFO__BUILDER_HPP_
