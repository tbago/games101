cmake_minimum_required (VERSION 3.9)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project (Transformation)

find_package(Eigen3 REQUIRED)

message(STATUS "Eigen3 include path ${EIGEN3_INCLUDE_DIR}")

add_executable(${CMAKE_PROJECT_NAME} main.cpp)

target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${EIGEN3_INCLUDE_DIR})

