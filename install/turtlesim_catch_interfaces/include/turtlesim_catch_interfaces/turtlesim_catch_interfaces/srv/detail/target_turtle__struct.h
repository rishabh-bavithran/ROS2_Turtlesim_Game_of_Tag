// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_catch_interfaces:srv/TargetTurtle.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__STRUCT_H_
#define TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__STRUCT_H_

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

/// Struct defined in srv/TargetTurtle in the package turtlesim_catch_interfaces.
typedef struct turtlesim_catch_interfaces__srv__TargetTurtle_Request
{
  rosidl_runtime_c__String name;
} turtlesim_catch_interfaces__srv__TargetTurtle_Request;

// Struct for a sequence of turtlesim_catch_interfaces__srv__TargetTurtle_Request.
typedef struct turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence
{
  turtlesim_catch_interfaces__srv__TargetTurtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_catch_interfaces__srv__TargetTurtle_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/TargetTurtle in the package turtlesim_catch_interfaces.
typedef struct turtlesim_catch_interfaces__srv__TargetTurtle_Response
{
  bool success;
} turtlesim_catch_interfaces__srv__TargetTurtle_Response;

// Struct for a sequence of turtlesim_catch_interfaces__srv__TargetTurtle_Response.
typedef struct turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence
{
  turtlesim_catch_interfaces__srv__TargetTurtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_catch_interfaces__srv__TargetTurtle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CATCH_INTERFACES__SRV__DETAIL__TARGET_TURTLE__STRUCT_H_
