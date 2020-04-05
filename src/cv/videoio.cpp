#include "videoio.h"

VideoCapturePtr cv_new_videocapture()
{
    return new cv::VideoCapture();
}

int cv_videocapture_read(VideoCapturePtr v, MatPtr buf)
{
    return v->read(*buf);
}

bool cv_videocapture_opendevice(VideoCapturePtr v, int device)
{
    return v->open(device);
}
