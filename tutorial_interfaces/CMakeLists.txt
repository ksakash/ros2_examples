cmake_minimum_required(VERSION 3.5)
project(tutorial_interfaces)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rosidl_generator_cpp REQUIRED)
find_package(rosidl_generator_c REQUIRED)
find_package(rosidl_typesupport_cpp REQUIRED)
find_package(fastcdr REQUIRED)
find_package(rosidl_typesupport_fastrtps_cpp REQUIRED)

include_directories(include/)
include_directories(${rclcpp_INCLUDE_DIRS})
include_directories(${rosidl_generator_c_INCLUDE_DIRS})
include_directories(${rosidl_generator_cpp_INCLUDE_DIRS})
include_directories(${rosidl_typesupport_cpp_INCLUDE_DIRS})
include_directories(${rosidl_typesupport_fastrtps_INCLUDE_DIRS})
include_directories(${fastcdr_INCLUDE_DIRS})

add_library(tutorial_interfaces__rosidl_typesupport_fastrtps_cpp
  include/tutorial_interfaces/msg/dds_fastrtps/temp__type_support.cpp)
target_link_libraries(tutorial_interfaces__rosidl_typesupport_fastrtps_cpp
  ${rosidl_generator_cpp_LIBRARIES}
  ${rosidl_generator_c_LIBRARIES}
  ${rosidl_typesupport_cpp_LIBRARIES}
  ${rosidl_typesupport_fastrtps_cpp_LIBRARIES}
  ${fastcdr_LIBRARIES})

add_library(main_support include/tutorial_interfaces/msg/temp__type_support.cpp)
target_link_libraries(main_support
  tutorial_interfaces__rosidl_typesupport_fastrtps_cpp
  ${rosidl_generator_cpp_LIBRARIES}
  ${rosidl_generator_c_LIBRARIES}
  ${rosidl_typesupport_cpp_LIBRARIES})

add_executable(main src/main.cpp)
target_link_libraries(main
    main_support
    tutorial_interfaces__rosidl_typesupport_fastrtps_cpp
    ${rclcpp_LIBRARIES}
    ${rosidl_generator_cpp_LIBRARIES}
    ${rosidl_default_generators_LIBRARIES}
    ${ament_cmake_LIBRARIES}
    ${builtin_interfaces_LIBRARIES})

#rosidl_generate_interfaces (${PROJECT_NAME}
#    "srv/SetBool.srv"
#)
ament_export_dependencies(rosidl_default_runtime)
ament_package()
