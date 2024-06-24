// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_catch_interfaces:msg/Turtleinfo.idl
// generated code does not contain a copyright notice
#include "turtlesim_catch_interfaces/msg/detail/turtleinfo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
turtlesim_catch_interfaces__msg__Turtleinfo__init(turtlesim_catch_interfaces__msg__Turtleinfo * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    turtlesim_catch_interfaces__msg__Turtleinfo__fini(msg);
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
turtlesim_catch_interfaces__msg__Turtleinfo__fini(turtlesim_catch_interfaces__msg__Turtleinfo * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // x
  // y
  // theta
}

bool
turtlesim_catch_interfaces__msg__Turtleinfo__are_equal(const turtlesim_catch_interfaces__msg__Turtleinfo * lhs, const turtlesim_catch_interfaces__msg__Turtleinfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  return true;
}

bool
turtlesim_catch_interfaces__msg__Turtleinfo__copy(
  const turtlesim_catch_interfaces__msg__Turtleinfo * input,
  turtlesim_catch_interfaces__msg__Turtleinfo * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // theta
  output->theta = input->theta;
  return true;
}

turtlesim_catch_interfaces__msg__Turtleinfo *
turtlesim_catch_interfaces__msg__Turtleinfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_catch_interfaces__msg__Turtleinfo * msg = (turtlesim_catch_interfaces__msg__Turtleinfo *)allocator.allocate(sizeof(turtlesim_catch_interfaces__msg__Turtleinfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_catch_interfaces__msg__Turtleinfo));
  bool success = turtlesim_catch_interfaces__msg__Turtleinfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_catch_interfaces__msg__Turtleinfo__destroy(turtlesim_catch_interfaces__msg__Turtleinfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_catch_interfaces__msg__Turtleinfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__init(turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_catch_interfaces__msg__Turtleinfo * data = NULL;

  if (size) {
    data = (turtlesim_catch_interfaces__msg__Turtleinfo *)allocator.zero_allocate(size, sizeof(turtlesim_catch_interfaces__msg__Turtleinfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_catch_interfaces__msg__Turtleinfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_catch_interfaces__msg__Turtleinfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__fini(turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      turtlesim_catch_interfaces__msg__Turtleinfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

turtlesim_catch_interfaces__msg__Turtleinfo__Sequence *
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * array = (turtlesim_catch_interfaces__msg__Turtleinfo__Sequence *)allocator.allocate(sizeof(turtlesim_catch_interfaces__msg__Turtleinfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__destroy(turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__are_equal(const turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * lhs, const turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_catch_interfaces__msg__Turtleinfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__copy(
  const turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * input,
  turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_catch_interfaces__msg__Turtleinfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_catch_interfaces__msg__Turtleinfo * data =
      (turtlesim_catch_interfaces__msg__Turtleinfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_catch_interfaces__msg__Turtleinfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_catch_interfaces__msg__Turtleinfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_catch_interfaces__msg__Turtleinfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
