add_executable(math_test main.cpp)
target_link_libraries(math_test PRIVATE 3D_math)


add_test(NAME math_test COMMAND math_test)