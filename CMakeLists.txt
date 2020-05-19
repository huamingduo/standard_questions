cmake_minimum_required(VERSION 3.0)
project(standard)

add_executable(swap_values
  src/swap_values.cc
)

add_executable(int_operations
  src/int_operations.cc
)

set_target_properties(swap_values int_operations
  PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)
