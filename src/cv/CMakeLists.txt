file(GLOB SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)

add_library(gocv_cgo ${SRC_FILES})

target_include_directories(gocv_cgo PUBLIC ${CMAKE_SOURCE_DIR}/include/goavx/cv
    ${CMAKE_SOURCE_DIR}/include/goavx
)
target_link_libraries(gocv_cgo PUBLIC ${OpenCV_LIBS})