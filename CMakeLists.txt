
cmake_minimum_required(VERSION 4.0.3)

project(3D_math_lib LANGUAGES CXX)

add_library(3D_math_lib INTERFACE)

target_include_directories(3D_math_lib INTERFACE includes)

target_compile_features(3D_math_lib INTERFACE)

target_compile_options(3D_math_lib INTERFACE -Wall -Wextra -Wpedantic)