file(GLOB PERCEPTION_BASE_SRC ${CMAKE_CURRENT_LIST_DIR}/*.cc)
add_library(perception_base ${PERCEPTION_BASE_SRC})
target_link_libraries(perception_base absl::strings)