// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:msg/Temp.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__TEMP__STRUCT_HPP_
#define TUTORIAL_INTERFACES__MSG__TEMP__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__msg__Temp __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__msg__Temp __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Temp_
{
  using Type = Temp_<ContainerAllocator>;

  explicit Temp_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit Temp_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  // field types and members
  using _data_type =
    bool;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::msg::Temp_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::msg::Temp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::Temp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::msg::Temp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::Temp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::Temp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::msg::Temp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::msg::Temp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::Temp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::msg::Temp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__msg__Temp
    std::shared_ptr<tutorial_interfaces::msg::Temp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__msg__Temp
    std::shared_ptr<tutorial_interfaces::msg::Temp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Temp_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Temp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Temp_

// alias to use template instance with default allocator
using Temp =
  tutorial_interfaces::msg::Temp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__TEMP__STRUCT_HPP_
