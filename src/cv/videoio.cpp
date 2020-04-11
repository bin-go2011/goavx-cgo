#include "videoio.h"

VideoCapturePtr _cv_new_videocapture()
{
    return new cv::VideoCapture();
}

int _cv_videocapture_read(VideoCapturePtr v, MatPtr buf)
{
    return v->read(*buf);
}

bool _cv_videocapture_opendevice(VideoCapturePtr v, int device)
{
    return v->open(device);
}
