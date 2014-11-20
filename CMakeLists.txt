cmake_minimum_required(VERSION 2.8.4)
project(RobotProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Robot.cpp Robot.h Plot.cpp Plot.h)
add_executable(RobotProject ${SOURCE_FILES})