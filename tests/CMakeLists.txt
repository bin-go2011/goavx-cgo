add_library(Catch2::Catch2 INTERFACE IMPORTED)
set_target_properties(Catch2::Catch2 PROPERTIES
    INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/catch2"
)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(ffmpeg_test ffmpeg_test.cpp)
target_link_libraries(ffmpeg_test Catch2::Catch2 ${FFMPEG_LIBRARIES} goav_cgo)
