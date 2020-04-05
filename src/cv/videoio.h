#ifndef CV_VIDEOIO_API_H_
#define CV_VIDEOIO_API_H_

#ifdef __cplusplus
#include <opencv2/opencv.hpp>
extern "C" {
#endif  

#include "core.h"

typedef cv::VideoCapture* VideoCapturePtr;

VideoCapturePtr cv_new_videocapture();
int cv_videocapture_read(VideoCapturePtr v, MatPtr buf);
bool cv_videocapture_opendevice(VideoCapturePtr v, int device);

#ifdef __cplusplus
}
#endif

#endif