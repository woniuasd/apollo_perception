cmake_minimum_required(VERSION 3.0.0)
project(lidarSegmention VERSION 0.1.0)
include_directories(${CMAKE_CURRENT_LIST_DIR})
set(CMAKE_CXX_STANDARD 11)
include(third_party/3rdConfig.cmake)
add_subdirectory(modules/perception)


