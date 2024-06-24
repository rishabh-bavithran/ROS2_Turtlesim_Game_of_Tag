// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from turtlesim_catch_interfaces:msg/Turtleinfo.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFO__FUNCTIONS_H_
#define TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "turtlesim_catch_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "turtlesim_catch_interfaces/msg/detail/turtleinfo__struct.h"

/// Initialize msg/Turtleinfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * turtlesim_catch_interfaces__msg__Turtleinfo
 * )) before or use
 * turtlesim_catch_interfaces__msg__Turtleinfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__msg__Turtleinfo__init(turtlesim_catch_interfaces__msg__Turtleinfo * msg);

/// Finalize msg/Turtleinfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__msg__Turtleinfo__fini(turtlesim_catch_interfaces__msg__Turtleinfo * msg);

/// Create msg/Turtleinfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * turtlesim_catch_interfaces__msg__Turtleinfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
turtlesim_catch_interfaces__msg__Turtleinfo *
turtlesim_catch_interfaces__msg__Turtleinfo__create();

/// Destroy msg/Turtleinfo message.
/**
 * It calls
 * turtlesim_catch_interfaces__msg__Turtleinfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__msg__Turtleinfo__destroy(turtlesim_catch_interfaces__msg__Turtleinfo * msg);

/// Check for msg/Turtleinfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__msg__Turtleinfo__are_equal(const turtlesim_catch_interfaces__msg__Turtleinfo * lhs, const turtlesim_catch_interfaces__msg__Turtleinfo * rhs);

/// Copy a msg/Turtleinfo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__msg__Turtleinfo__copy(
  const turtlesim_catch_interfaces__msg__Turtleinfo * input,
  turtlesim_catch_interfaces__msg__Turtleinfo * output);

/// Initialize array of msg/Turtleinfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * turtlesim_catch_interfaces__msg__Turtleinfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__init(turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * array, size_t size);

/// Finalize array of msg/Turtleinfo messages.
/**
 * It calls
 * turtlesim_catch_interfaces__msg__Turtleinfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__fini(turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * array);

/// Create array of msg/Turtleinfo messages.
/**
 * It allocates the memory for the array and calls
 * turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence *
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__create(size_t size);

/// Destroy array of msg/Turtleinfo messages.
/**
 * It calls
 * turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
void
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__destroy(turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * array);

/// Check for msg/Turtleinfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__are_equal(const turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * lhs, const turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * rhs);

/// Copy an array of msg/Turtleinfo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_turtlesim_catch_interfaces
bool
turtlesim_catch_interfaces__msg__Turtleinfo__Sequence__copy(
  const turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * input,
  turtlesim_catch_interfaces__msg__Turtleinfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFO__FUNCTIONS_H_
