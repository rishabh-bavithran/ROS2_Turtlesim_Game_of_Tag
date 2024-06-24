// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtlesim_catch_interfaces:msg/Turtleinfoarray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__STRUCT_HPP_
#define TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'turtles'
#include "turtlesim_catch_interfaces/msg/detail/turtleinfo__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtlesim_catch_interfaces__msg__Turtleinfoarray __attribute__((deprecated))
#else
# define DEPRECATED__turtlesim_catch_interfaces__msg__Turtleinfoarray __declspec(deprecated)
#endif

namespace turtlesim_catch_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Turtleinfoarray_
{
  using Type = Turtleinfoarray_<ContainerAllocator>;

  explicit Turtleinfoarray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Turtleinfoarray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _turtles_type =
    std::vector<turtlesim_catch_interfaces::msg::Turtleinfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtlesim_catch_interfaces::msg::Turtleinfo_<ContainerAllocator>>>;
  _turtles_type turtles;

  // setters for named parameter idiom
  Type & set__turtles(
    const std::vector<turtlesim_catch_interfaces::msg::Turtleinfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<turtlesim_catch_interfaces::msg::Turtleinfo_<ContainerAllocator>>> & _arg)
  {
    this->turtles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtlesim_catch_interfaces__msg__Turtleinfoarray
    std::shared_ptr<turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtlesim_catch_interfaces__msg__Turtleinfoarray
    std::shared_ptr<turtlesim_catch_interfaces::msg::Turtleinfoarray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Turtleinfoarray_ & other) const
  {
    if (this->turtles != other.turtles) {
      return false;
    }
    return true;
  }
  bool operator!=(const Turtleinfoarray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Turtleinfoarray_

// alias to use template instance with default allocator
using Turtleinfoarray =
  turtlesim_catch_interfaces::msg::Turtleinfoarray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace turtlesim_catch_interfaces

#endif  // TURTLESIM_CATCH_INTERFACES__MSG__DETAIL__TURTLEINFOARRAY__STRUCT_HPP_
