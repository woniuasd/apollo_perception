add_executable(blob_demo ${CMAKE_CURRENT_LIST_DIR}/blob_demo.cc)
target_link_libraries(blob_demo perception_base)

add_executable(box_demo ${CMAKE_CURRENT_LIST_DIR}/box_demo.cc)
target_link_libraries(box_demo perception_base)

add_executable(camera_demo ${CMAKE_CURRENT_LIST_DIR}/camera_demo.cc)
target_link_libraries(camera_demo perception_base)