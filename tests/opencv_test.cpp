// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include <catch.hpp>

#include "cv/core.h"
#include "cv/videoio.h"

TEST_CASE("basic test", "[opencv]" ) {
    std::cout << std::hex << _cv_version() << std::endl;
}

TEST_CASE("mat properties", "[opencv]") {
    MatPtr mat = _cv_new_mat();

	MatPtr mat1 = _cv_new_mat_with(640, 480, CV_8UC3);
	
    printf("rows offset: %d\n", (char*)(&mat->rows) - (char*)(mat));
}

TEST_CASE("open camera", "[opencv]") {
	int ret;
	VideoCapturePtr cap = _cv_new_videocapture();
	ret= _cv_videocapture_open_device(cap, 0);
	double width, height, fps;
	_cv_videocapture_get(cap, cv::CAP_PROP_FRAME_WIDTH, &width);
	_cv_videocapture_get(cap, cv::CAP_PROP_FRAME_HEIGHT, &height);
	_cv_videocapture_get(cap, cv::CAP_PROP_FPS, &fps);

}