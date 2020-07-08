// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:msg/Lemp.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__LEMP__STRUCT_HPP_
#define TUTORIAL_INTERFACES__MSG__LEMP__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'wtf'
#include "tutorial_interfaces/msg/temp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__msg__Lemp __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__msg__Lemp __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lemp_
{
  using Type = Lemp_<ContainerAllocator>;

  explicit Lemp_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : wtf(_init)
  {
    (void)_init;
  }

  explicit Lemp_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : wtf(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _wtf_type =
    tutorial_interfaces::msg::Temp_<ContainerAllocator>;
  _wtf_type wtf;

  // setters for named parameter idiom
  Type & set__wtf(
    const tutorial_interfaces::msg::Temp_<ContainerAllocator> & _arg)
  {
    this->wtf = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::msg::Lemp_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::msg::Lemp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::Lemp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::Lemp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::Lemp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::Lemp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::Lemp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::Lemp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::Lemp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::Lemp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__msg__Lemp
    std::shared_ptr<tutorial_interfaces::msg::Lemp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__msg__Lemp
    std::shared_ptr<tutorial_interfaces::msg::Lemp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lemp_ & other) const
  {
    if (this->wtf != other.wtf) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lemp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lemp_

// alias to use template instance with default allocator
using Lemp =
  tutorial_interfaces::msg::Lemp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__LEMP__STRUCT_HPP_
