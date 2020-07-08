// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/Temp.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__TEMP__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__TEMP__TRAITS_HPP_

#include "tutorial_interfaces/srv/temp__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::Temp_Request>()
{
  return "tutorial_interfaces::srv::Temp_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Temp_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Temp_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::srv::Temp_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'xyz'
#include "tutorial_interfaces/msg/temp__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::Temp_Response>()
{
  return "tutorial_interfaces::srv::Temp_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Temp_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Temp_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tutorial_interfaces::srv::Temp_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::Temp>()
{
  return "tutorial_interfaces::srv::Temp";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Temp>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::Temp_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::Temp_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Temp>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::Temp_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::Temp_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::srv::Temp>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::srv::Temp_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::srv::Temp_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__TEMP__TRAITS_HPP_
