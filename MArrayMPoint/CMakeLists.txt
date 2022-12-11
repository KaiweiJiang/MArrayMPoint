cmake_minimum_required(VERSION 3.21)
project(MArrayMPoint)

set(CMAKE_CXX_STANDARD 14)

add_executable(MArrayMPoint
                3DArrayOffset.cpp
                MDArrayPoint.cpp
                MPMAPointOffset.cpp
                PointAssignment.cpp
                PointOffset.cpp main.cpp
              )
