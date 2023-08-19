cmake_minimum_required(VERSION 3.26)

project(hello_absl VERSION 0.0.1 LANGUAGES CXX)

option(CMAKE_VERBOSE_MAKEFILE "show compilation process" ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "compile_commands.json generate")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s") 
add_compile_options(-std=c++17)
cmake_path(SET dep_dir "/home/ragecpp/hey-cpp/ubuntu-22-04")
cmake_path(APPEND dep_dir "abseil-cpp_install" OUTPUT_VARIABLE absl_dir)
set(CMAKE_PREFIX_PATH "${CMAKE_PREFIX_PATH};${absl_dir};")

find_package(absl CONFIG REQUIRED)

add_executable(hello_absl "main.cpp")

target_link_libraries(hello_absl
  absl::flags
  absl::flags_parse)
