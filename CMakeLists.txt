#Change to static once done to add SIMD


cmake_minimum_required(VERSION 3.20)

project(3D_math_lib LANGUAGES CXX)


add_library(3D_math_lib src/Vec3.cpp includes/Vec3.h) #header only target