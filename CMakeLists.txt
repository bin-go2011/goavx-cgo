cmake_minimum_required(VERSION 3.13)
project(goavx-cgo)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})
set(FFMPEG_ROOT $ENV{FFMPEG_ROOT})

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

include_directories(
    ${CMAKE_SOURCE_DIR}/src
    ${FFMPEG_INCLUDE_DIRS}
)

add_subdirectory(src)
add_subdirectory(tests)