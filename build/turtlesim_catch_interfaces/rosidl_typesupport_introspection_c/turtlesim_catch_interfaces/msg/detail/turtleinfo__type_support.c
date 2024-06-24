// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlesim_catch_interfaces:msg/Turtleinfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlesim_catch_interfaces/msg/detail/turtleinfo__rosidl_typesupport_introspection_c.h"
#include "turtlesim_catch_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlesim_catch_interfaces/msg/detail/turtleinfo__functions.h"
#include "turtlesim_catch_interfaces/msg/detail/turtleinfo__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim_catch_interfaces__msg__Turtleinfo__init(message_memory);
}

void turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_fini_function(void * message_memory)
{
  turtlesim_catch_interfaces__msg__Turtleinfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_message_member_array[4] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_catch_interfaces__msg__Turtleinfo, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_catch_interfaces__msg__Turtleinfo, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_catch_interfaces__msg__Turtleinfo, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_catch_interfaces__msg__Turtleinfo, theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_message_members = {
  "turtlesim_catch_interfaces__msg",  // message namespace
  "Turtleinfo",  // message name
  4,  // number of fields
  sizeof(turtlesim_catch_interfaces__msg__Turtleinfo),
  turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_message_member_array,  // message members
  turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_message_type_support_handle = {
  0,
  &turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim_catch_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_catch_interfaces, msg, Turtleinfo)() {
  if (!turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_message_type_support_handle.typesupport_identifier) {
    turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlesim_catch_interfaces__msg__Turtleinfo__rosidl_typesupport_introspection_c__Turtleinfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
