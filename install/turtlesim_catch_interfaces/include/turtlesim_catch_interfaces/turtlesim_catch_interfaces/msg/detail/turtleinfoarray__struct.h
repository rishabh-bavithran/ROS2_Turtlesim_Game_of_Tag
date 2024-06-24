// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_catch_interfaces:msg/Turtleinfoarray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__STRUCT_H_
#define TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "turtlesim_catch_interfaces/msg/detail/turtleinfo__struct.h"

/// Struct defined in msg/Turtleinfoarray in the package turtlesim_catch_interfaces.
typedef struct turtlesim_catch_interfaces__msg__Turtleinfoarray
{
  turtlesim_catch_interfaces__msg__Turtleinfo__Sequence turtles;
} turtlesim_catch_interfaces__msg__Turtleinfoarray;

// Struct for a sequence of turtlesim_catch_interfaces__msg__Turtleinfoarray.
typedef struct turtlesim_catch_interfaces__msg__Turtleinfoarray__Sequence
{
  turtlesim_catch_interfaces__msg__Turtleinfoarray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_catch_interfaces__msg__Turtleinfoarray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__STRUCT_H_
