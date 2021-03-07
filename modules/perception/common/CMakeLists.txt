file(GLOB PERCEPTION_COMMON_SRC ${CMAKE_CURRENT_LIST_DIR}/*.cc)
add_library(perception_common ${PERCEPTION_COMMON_SRC})
target_link_libraries(perception_common absl::strings ${Boost_LIBRARIES})