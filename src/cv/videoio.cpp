#include "videoio.h"

VideoCapturePtr _cv_new_videocapture()
{
    return new cv::VideoCapture();
}

int _cv_videocapture_read(VideoCapturePtr cap, MatPtr buf)
{
    return cap->read(*buf);
}

int _cv_videocapture_opendevice(VideoCapturePtr cap, int device)
{
    return cap->open(device);
}

void _cv_release_videocapture(VideoCapturePtr cap)
{
    delete cap;
}