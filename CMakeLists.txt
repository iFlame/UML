cmake_minimum_required(VERSION 2.8.4)
project(RobotProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
                 BaseRobot/Robot.cpp
                 BaseRobot/Plot.cpp
                 BaseRobot/Position.cpp
                 BaseRobot/Robot.h
                 BaseRobot/Plot.h
                 BaseRobot/Position.h
                 BaseRobot/Objet.cpp
                 BaseRobot/Objet.h
                 Etat/*)
add_executable(RobotProject ${SOURCE_FILES})