// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tutorial_interfaces:srv/Temp.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__TEMP__STRUCT_HPP_
#define TUTORIAL_INTERFACES__SRV__TEMP__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__Temp_Request __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__Temp_Request __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Temp_Request_
{
  using Type = Temp_Request_<ContainerAllocator>;

  explicit Temp_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = false;
    }
  }

  explicit Temp_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
    tutorial_interfaces::srv::Temp_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::Temp_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::Temp_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::Temp_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::Temp_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::Temp_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::Temp_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::Temp_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::Temp_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::Temp_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__Temp_Request
    std::shared_ptr<tutorial_interfaces::srv::Temp_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__Temp_Request
    std::shared_ptr<tutorial_interfaces::srv::Temp_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Temp_Request_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Temp_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Temp_Request_

// alias to use template instance with default allocator
using Temp_Request =
  tutorial_interfaces::srv::Temp_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces


// Include directives for member types
// Member 'xyz'
#include "tutorial_interfaces/msg/temp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tutorial_interfaces__srv__Temp_Response __attribute__((deprecated))
#else
# define DEPRECATED__tutorial_interfaces__srv__Temp_Response __declspec(deprecated)
#endif

namespace tutorial_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Temp_Response_
{
  using Type = Temp_Response_<ContainerAllocator>;

  explicit Temp_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : xyz(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Temp_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : message(_alloc),
    xyz(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;
  using _xyz_type =
    tutorial_interfaces::msg::Temp_<ContainerAllocator>;
  _xyz_type xyz;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__xyz(
    const tutorial_interfaces::msg::Temp_<ContainerAllocator> & _arg)
  {
    this->xyz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tutorial_interfaces::srv::Temp_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tutorial_interfaces::srv::Temp_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::Temp_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tutorial_interfaces::srv::Temp_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::Temp_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::Temp_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tutorial_interfaces::srv::Temp_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tutorial_interfaces::srv::Temp_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::Temp_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tutorial_interfaces::srv::Temp_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tutorial_interfaces__srv__Temp_Response
    std::shared_ptr<tutorial_interfaces::srv::Temp_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tutorial_interfaces__srv__Temp_Response
    std::shared_ptr<tutorial_interfaces::srv::Temp_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Temp_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->xyz != other.xyz) {
      return false;
    }
    return true;
  }
  bool operator!=(const Temp_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Temp_Response_

// alias to use template instance with default allocator
using Temp_Response =
  tutorial_interfaces::srv::Temp_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tutorial_interfaces

namespace tutorial_interfaces
{

namespace srv
{

struct Temp
{
  using Request = tutorial_interfaces::srv::Temp_Request;
  using Response = tutorial_interfaces::srv::Temp_Response;
};

}  // namespace srv

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__TEMP__STRUCT_HPP_
