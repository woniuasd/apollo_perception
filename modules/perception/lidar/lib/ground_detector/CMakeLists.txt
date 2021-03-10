file(GLOB GROUND_SERVICE_DETECTOR_SRC ${CMAKE_CURRENT_LIST_DIR}/ground_service_detector/*.cc)
file(GLOB SPATIO_TEMPORAL_GROUND_DETECTOR_SRC ${CMAKE_CURRENT_LIST_DIR}/spatio_temporal_ground_detector/*.cc)
add_library(ground_service_detector ${GROUND_SERVICE_DETECTOR_SRC})
add_library(spatio_temporal_ground_detector ${SPATIO_TEMPORAL_GROUND_DETECTOR_SRC})