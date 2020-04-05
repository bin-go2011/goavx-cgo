add_subdirectory(av)

file(GLOB_RECURSE AV_SRC_FILES av/*.cpp)
add_library(goavx SHARED 
    common/utils.cpp
    ${AV_SRC_FILES}
)
target_link_libraries(goavx goav_cgo)