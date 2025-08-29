
cmake_minimum_required(VERSION 3.20)

project(3D_math_lib LANGUAGES CXX)


add_library(3D_math STATIC 
    src/Vec3.cpp)

target_include_directories(3D_math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes)

enable_testing()
add_subdirectory(math_test)