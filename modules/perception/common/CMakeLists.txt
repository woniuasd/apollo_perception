file(GLOB PERCEPTION_COMMON_SRC ${CMAKE_CURRENT_LIST_DIR}/*.cc
                                ${CMAKE_CURRENT_LIST_DIR}/geometry/*.cc
                                ${CMAKE_CURRENT_LIST_DIR}/graph/*.cc
                                ${CMAKE_CURRENT_LIST_DIR}/i_lib/pc/*.cc
                                ${CMAKE_CURRENT_LIST_DIR}/image_processing/*.cc
                                ${CMAKE_CURRENT_LIST_DIR}/io/*.cc
                                ${CMAKE_CURRENT_LIST_DIR}/sensor_manager/*.cc)
add_library(perception_common ${PERCEPTION_COMMON_SRC})
target_link_libraries(perception_common absl::strings ${Boost_LIBRARIES})