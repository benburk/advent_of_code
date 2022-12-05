cmake_minimum_required(VERSION 3.25.0)
project(AdventOfCode CXX)

set(CMAKE_BUILD_TYPE Release)


set(common_flags -Wall -Wextra -Wpedantic -Wconversion -Wuninitialized -march=native)

add_executable(advent)
add_subdirectory(src)
add_subdirectory(days)
target_include_directories(advent PUBLIC days)
target_compile_features(advent PUBLIC cxx_std_20)
target_compile_options(advent PUBLIC ${common_flags})


