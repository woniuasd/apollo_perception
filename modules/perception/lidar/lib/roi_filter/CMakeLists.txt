file(GLOB HDMAP_ROI_FILTER_SRC ${CMAKE_CURRENT_LIST_DIR}/hdmap_roi_filter/*.cc)
file(GLOB ROI_SERVICE_FILTER_SRC ${CMAKE_CURRENT_LIST_DIR}/roi_service_filter/*.cc)
add_library(hdmap_roi_filter ${HDMAP_ROI_FILTER_SRC})
add_library(roi_service_filter ${ROI_SERVICE_FILTER_SRC})