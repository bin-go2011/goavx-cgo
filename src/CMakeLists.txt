add_subdirectory(av)
add_subdirectory(cv)

file(GLOB AV_SRC_FILES av/*.cpp)
file(GLOB CV_SRC_FILES cv/*.cpp)

add_library(goavx SHARED 
    common/utils.cpp
    ${AV_SRC_FILES}
    ${CV_SRC_FILES}
)
target_link_libraries(goavx goav_cgo gocv_cgo)