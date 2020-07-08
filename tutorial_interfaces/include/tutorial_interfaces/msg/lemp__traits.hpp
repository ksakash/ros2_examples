// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:msg/Lemp.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__LEMP__TRAITS_HPP_
#define TUTORIAL_INTERFACES__MSG__LEMP__TRAITS_HPP_

#include "tutorial_interfaces/msg/lemp__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'wtf'
#include "tutorial_interfaces/msg/temp__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::msg::Lemp>()
{
  return "tutorial_interfaces::msg::Lemp";
}

template<>
struct has_fixed_size<tutorial_interfaces::msg::Lemp>
  : std::integral_constant<bool, has_fixed_size<tutorial_interfaces::msg::Temp>::value> {};

template<>
struct has_bounded_size<tutorial_interfaces::msg::Lemp>
  : std::integral_constant<bool, has_bounded_size<tutorial_interfaces::msg::Temp>::value> {};

template<>
struct is_message<tutorial_interfaces::msg::Lemp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__MSG__LEMP__TRAITS_HPP_
