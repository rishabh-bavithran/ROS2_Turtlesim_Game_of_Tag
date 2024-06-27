// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_catch_interfaces:srv/TargetTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__BUILDER_HPP_
#define TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_catch_interfaces/srv/detail/target_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_catch_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetTurtle_Request_name
{
public:
  Init_TargetTurtle_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_catch_interfaces::srv::TargetTurtle_Request name(::turtlesim_catch_interfaces::srv::TargetTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_catch_interfaces::srv::TargetTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_catch_interfaces::srv::TargetTurtle_Request>()
{
  return turtlesim_catch_interfaces::srv::builder::Init_TargetTurtle_Request_name();
}

}  // namespace turtlesim_catch_interfaces


namespace turtlesim_catch_interfaces
{

namespace srv
{

namespace builder
{

class Init_TargetTurtle_Response_success
{
public:
  Init_TargetTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_catch_interfaces::srv::TargetTurtle_Response success(::turtlesim_catch_interfaces::srv::TargetTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_catch_interfaces::srv::TargetTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_catch_interfaces::srv::TargetTurtle_Response>()
{
  return turtlesim_catch_interfaces::srv::builder::Init_TargetTurtle_Response_success();
}

}  // namespace turtlesim_catch_interfaces

#endif  // TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__BUILDER_HPP_
