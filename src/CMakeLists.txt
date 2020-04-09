add_subdirectory(av)
add_subdirectory(cv)

file(GLOB AV_SRC_FILES av/*.cpp)
file(GLOB CV_SRC_FILES cv/*.cpp)

if (WIN32)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(goavx SHARED
    ${AV_SRC_FILES}
    ${CV_SRC_FILES}
)
elseif (APPLE)
add_library(goavx 
    ${AV_SRC_FILES}
    ${CV_SRC_FILES}
)
endif()

target_link_libraries(goavx goav_cgo gocv_cgo)
