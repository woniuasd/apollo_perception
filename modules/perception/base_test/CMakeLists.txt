# file(GLOB PERCEPTION_BASE_TEST_SRC ${CMAKE_CURRENT_LIST_DIR}/*.cc)
# add_executable(demo_test ${PERCEPTION_BASE_TEST_SRC})
# target_link_libraries(demo_test ${perception_base} ${GTEST_LIBRARIES})

add_executable(box_test ${CMAKE_CURRENT_LIST_DIR}/box_test.cc)
target_link_libraries(box_test ${perception_base} ${GTEST_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})
