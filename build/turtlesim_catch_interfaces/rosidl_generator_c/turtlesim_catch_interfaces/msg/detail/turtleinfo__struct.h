// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_catch_interfaces:msg/Turtleinfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFO__STRUCT_H_
#define TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Turtleinfo in the package turtlesim_catch_interfaces.
typedef struct turtlesim_catch_interfaces__msg__Turtleinfo
{
  rosidl_runtime_c__String name;
  double x;
  double y;
  double theta;
} turtlesim_catch_interfaces__msg__Turtleinfo;

// Struct for a sequence of turtlesim_catch_interfaces__msg__Turtleinfo.
typedef struct turtlesim_catch_interfaces__msg__Turtleinfo__Sequence
{
  turtlesim_catch_interfaces__msg__Turtleinfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_catch_interfaces__msg__Turtleinfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFO__STRUCT_H_
