file(GLOB FUSED_CLASSIFIER_SRC ${CMAKE_CURRENT_LIST_DIR}/fused_classifier/*.cc)
add_library(fused_classifier ${FUSED_CLASSIFIER_SRC})