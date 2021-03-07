#abs
find_package(absl REQUIRED)
include_directories(${CMAKE_CURRENT_LIST_DIR}/absl/include)
#pcl
# set(PCL_DIR ${CMAKE_CURRENT_LIST_DIR}/pcl/lib/cmake)
# find_package(PCL REQUIRED)
# include_directories(${PCL_INCLUDE_DIRS})
#glog
# find_library(GLOG_LIB NAMES libglog.a
#             PATHS ${CMAKE_CURRENT_LIST_DIR}/glog/lib
#             NO_DEFAULT_PATHS)
# include_directories(${CMAKE_CURRENT_LIST_DIR}/glog/include)
find_package (glog REQUIRED)
#protobuf
# find_library(PROTOBUF_LIB NAMES libprotobuf.a
#             PATHS ${CMAKE_CURRENT_LIST_DIR}/protobuf/lib)
# include_directories(${CMAKE_CURRENT_LIST_DIR}/protobuf/include)
find_package(Protobuf REQUIRED)
if(Protobuf_FOUND)
    include_directories(${Protobuf_INCLUDE_DIRS})
endif()
find_package(GTest REQUIRED)
if(GTest_FOUND)
    include_directories(${GTEST_INCLUDE_DIRS})
endif()
find_package(Threads REQUIRED)
find_package( OpenCV REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS})
#boost
find_package(Boost)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif()