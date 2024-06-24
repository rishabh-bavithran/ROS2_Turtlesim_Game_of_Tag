// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtlesim_catch_interfaces:msg/Turtleinfoarray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtlesim_catch_interfaces/msg/detail/turtleinfoarray__rosidl_typesupport_introspection_c.h"
#include "turtlesim_catch_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtlesim_catch_interfaces/msg/detail/turtleinfoarray__functions.h"
#include "turtlesim_catch_interfaces/msg/detail/turtleinfoarray__struct.h"


// Include directives for member types
// Member `turtles`
#include "turtlesim_catch_interfaces/msg/turtleinfo.h"
// Member `turtles`
#include "turtlesim_catch_interfaces/msg/detail/turtleinfo__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtlesim_catch_interfaces__msg__Turtleinfoarray__init(message_memory);
}

void turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_fini_function(void * message_memory)
{
  turtlesim_catch_interfaces__msg__Turtleinfoarray__fini(message_memory);
}

size_t turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__size_function__Turtleinfoarray__turtles(
  const void * untyped_member)
{
  const turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * member =
    (const turtlesim_catch_interfaces__msg__Turtleinfo__Sequence *)(untyped_member);
  return member->size;
}

const void * turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__get_const_function__Turtleinfoarray__turtles(
  const void * untyped_member, size_t index)
{
  const turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * member =
    (const turtlesim_catch_interfaces__msg__Turtleinfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__get_function__Turtleinfoarray__turtles(
  void * untyped_member, size_t index)
{
  turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * member =
    (turtlesim_catch_interfaces__msg__Turtleinfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__fetch_function__Turtleinfoarray__turtles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const turtlesim_catch_interfaces__msg__Turtleinfo * item =
    ((const turtlesim_catch_interfaces__msg__Turtleinfo *)
    turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__get_const_function__Turtleinfoarray__turtles(untyped_member, index));
  turtlesim_catch_interfaces__msg__Turtleinfo * value =
    (turtlesim_catch_interfaces__msg__Turtleinfo *)(untyped_value);
  *value = *item;
}

void turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__assign_function__Turtleinfoarray__turtles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  turtlesim_catch_interfaces__msg__Turtleinfo * item =
    ((turtlesim_catch_interfaces__msg__Turtleinfo *)
    turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__get_function__Turtleinfoarray__turtles(untyped_member, index));
  const turtlesim_catch_interfaces__msg__Turtleinfo * value =
    (const turtlesim_catch_interfaces__msg__Turtleinfo *)(untyped_value);
  *item = *value;
}

bool turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__resize_function__Turtleinfoarray__turtles(
  void * untyped_member, size_t size)
{
  turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * member =
    (turtlesim_catch_interfaces__msg__Turtleinfo__Sequence *)(untyped_member);
  turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__fini(member);
  return turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_message_member_array[1] = {
  {
    "turtles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtlesim_catch_interfaces__msg__Turtleinfoarray, turtles),  // bytes offset in struct
    NULL,  // default value
    turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__size_function__Turtleinfoarray__turtles,  // size() function pointer
    turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__get_const_function__Turtleinfoarray__turtles,  // get_const(index) function pointer
    turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__get_function__Turtleinfoarray__turtles,  // get(index) function pointer
    turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__fetch_function__Turtleinfoarray__turtles,  // fetch(index, &value) function pointer
    turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__assign_function__Turtleinfoarray__turtles,  // assign(index, value) function pointer
    turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__resize_function__Turtleinfoarray__turtles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_message_members = {
  "turtlesim_catch_interfaces__msg",  // message namespace
  "Turtleinfoarray",  // message name
  1,  // number of fields
  sizeof(turtlesim_catch_interfaces__msg__Turtleinfoarray),
  turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_message_member_array,  // message members
  turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_init_function,  // function to initialize message memory (memory has to be allocated)
  turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_message_type_support_handle = {
  0,
  &turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtlesim_catch_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_catch_interfaces, msg, Turtleinfoarray)() {
  turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtlesim_catch_interfaces, msg, Turtleinfo)();
  if (!turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_message_type_support_handle.typesupport_identifier) {
    turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtlesim_catch_interfaces__msg__Turtleinfoarray__rosidl_typesupport_introspection_c__Turtleinfoarray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
