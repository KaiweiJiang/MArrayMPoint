cmake_minimum_required(VERSION 3.21)

project(MArrayMPoint)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(. SRCS)

add_executable(MArrayMPoint ${SRCS})
