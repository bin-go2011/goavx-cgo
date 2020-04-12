#include "videoio.h"
#include <iostream>

VideoCapturePtr _cv_new_videocapture()
{
    return new cv::VideoCapture();
}

int _cv_videocapture_read(VideoCapturePtr cap, MatPtr buf)
{
    return cap->read(*buf);
}

int _cv_videocapture_open_device(VideoCapturePtr cap, int device)
{
    return cap->open(device);
}

void _cv_release_videocapture(VideoCapturePtr cap)
{
    delete cap;
}

int _cv_videocapture_open_file(VideoCapturePtr cap, const char* filename)
{
    int ret = cap->open(filename);
    if (ret < 0)
        return -1;
	int frames = (int) cap->get(cv::CAP_PROP_FRAME_COUNT);
  	int tmpw   = (int) cap->get(cv::CAP_PROP_FRAME_WIDTH);
  	int tmph   = (int) cap->get(cv::CAP_PROP_FRAME_HEIGHT);
  	std::cout << "Video has " << frames << " frames of dimensions("
       << tmpw << ", " << tmph << ")." << std::endl;

    return ret;
}
