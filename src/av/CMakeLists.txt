file(GLOB SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)

add_library(goav_cgo ${SRC_FILES}
)
target_include_directories(goav_cgo PUBLIC ${CMAKE_SOURCE_DIR}/include/goavx/av
    ${CMAKE_SOURCE_DIR}/include/goavx
)
if (WIN32)
    target_link_libraries(goav_cgo PUBLIC ${FFMPEG_LIBRARIES})
elseif(APPLE)
    target_link_libraries(goav_cgo PUBLIC ${FFMPEG_LIBRARIES}
        "-framework CoreFoundation -framework CoreVideo -framework CoreMedia -framework AudioToolbox -framework VideoToolbox -framework Security" 
        z bz2 iconv lzma
)
endif()