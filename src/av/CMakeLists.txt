file(GLOB SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)

add_library(goav_cgo ${SRC_FILES}
    ../common/utils.cpp
)
target_include_directories(goav_cgo PUBLIC ${CMAKE_CURRENT_LIST_DIR})
if (WIN32)
    target_link_libraries(goav_cgo PUBLIC ${FFMPEG_LIBRARIES})
elseif(APPLE)
    target_link_libraries(goav_cgo PUBLIC ${FFMPEG_LIBRARIES}
        "-framework CoreFoundation -framework CoreVideo -framework CoreMedia -framework AudioToolbox -framework VideoToolbox -framework Security" 
        z bz2 iconv lzma
)
endif()