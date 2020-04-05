cmake_minimum_required(VERSION 3.13)
project(goavx-cgo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})
set(FFMPEG_ROOT $ENV{FFMPEG_ROOT})

configure_file(config.in.h config.h)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

find_package(FFMPEG REQUIRED
COMPONENTS
avutil
avcodec
avformat
avfilter
swscale
swresample
)

find_package(OpenCV REQUIRED)

include_directories(
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_BINARY_DIR}
    ${FFMPEG_INCLUDE_DIRS}
    ${OpenCV_INCLUDE_DIRS}
)

add_subdirectory(src)
add_subdirectory(tests)