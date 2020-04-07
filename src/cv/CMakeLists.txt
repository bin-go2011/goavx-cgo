file(GLOB SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)

add_library(gocv_cgo ${SRC_FILES}
    ../common/utils.cpp
)

target_include_directories(gocv_cgo PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(gocv_cgo PUBLIC ${OpenCV_LIBS})