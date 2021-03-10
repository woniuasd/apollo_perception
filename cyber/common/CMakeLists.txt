file(GLOB CYBER_COMMON_SRC ${CMAKE_CURRENT_LIST_DIR}/*.cc)
add_library(cyber_common ${CYBER_COMMON_SRC})
target_link_libraries(cyber_common glog::glog)