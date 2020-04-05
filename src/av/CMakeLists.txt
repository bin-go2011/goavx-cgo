file(GLOB SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)

add_library(goav_cgo ${SRC_FILES}
    ../common/utils.cpp
)
target_include_directories(goav_cgo PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(goav_cgo PUBLIC ${FFMPEG_LIBRARIES})