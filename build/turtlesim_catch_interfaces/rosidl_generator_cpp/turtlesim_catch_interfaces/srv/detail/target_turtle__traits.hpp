// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlesim_catch_interfaces:srv/TargetTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__TRAITS_HPP_
#define TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtlesim_catch_interfaces/srv/detail/target_turtle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtlesim_catch_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TargetTurtle_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetTurtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetTurtle_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim_catch_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_catch_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_catch_interfaces::srv::TargetTurtle_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_catch_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_catch_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_catch_interfaces::srv::TargetTurtle_Request & msg)
{
  return turtlesim_catch_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_catch_interfaces::srv::TargetTurtle_Request>()
{
  return "turtlesim_catch_interfaces::srv::TargetTurtle_Request";
}

template<>
inline const char * name<turtlesim_catch_interfaces::srv::TargetTurtle_Request>()
{
  return "turtlesim_catch_interfaces/srv/TargetTurtle_Request";
}

template<>
struct has_fixed_size<turtlesim_catch_interfaces::srv::TargetTurtle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtlesim_catch_interfaces::srv::TargetTurtle_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtlesim_catch_interfaces::srv::TargetTurtle_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtlesim_catch_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TargetTurtle_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TargetTurtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TargetTurtle_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtlesim_catch_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtlesim_catch_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtlesim_catch_interfaces::srv::TargetTurtle_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtlesim_catch_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtlesim_catch_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtlesim_catch_interfaces::srv::TargetTurtle_Response & msg)
{
  return turtlesim_catch_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtlesim_catch_interfaces::srv::TargetTurtle_Response>()
{
  return "turtlesim_catch_interfaces::srv::TargetTurtle_Response";
}

template<>
inline const char * name<turtlesim_catch_interfaces::srv::TargetTurtle_Response>()
{
  return "turtlesim_catch_interfaces/srv/TargetTurtle_Response";
}

template<>
struct has_fixed_size<turtlesim_catch_interfaces::srv::TargetTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtlesim_catch_interfaces::srv::TargetTurtle_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtlesim_catch_interfaces::srv::TargetTurtle_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlesim_catch_interfaces::srv::TargetTurtle>()
{
  return "turtlesim_catch_interfaces::srv::TargetTurtle";
}

template<>
inline const char * name<turtlesim_catch_interfaces::srv::TargetTurtle>()
{
  return "turtlesim_catch_interfaces/srv/TargetTurtle";
}

template<>
struct has_fixed_size<turtlesim_catch_interfaces::srv::TargetTurtle>
  : std::integral_constant<
    bool,
    has_fixed_size<turtlesim_catch_interfaces::srv::TargetTurtle_Request>::value &&
    has_fixed_size<turtlesim_catch_interfaces::srv::TargetTurtle_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtlesim_catch_interfaces::srv::TargetTurtle>
  : std::integral_constant<
    bool,
    has_bounded_size<turtlesim_catch_interfaces::srv::TargetTurtle_Request>::value &&
    has_bounded_size<turtlesim_catch_interfaces::srv::TargetTurtle_Response>::value
  >
{
};

template<>
struct is_service<turtlesim_catch_interfaces::srv::TargetTurtle>
  : std::true_type
{
};

template<>
struct is_service_request<turtlesim_catch_interfaces::srv::TargetTurtle_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtlesim_catch_interfaces::srv::TargetTurtle_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__TRAITS_HPP_
