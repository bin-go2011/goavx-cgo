#ifndef CV_VIDEOIO_API_H_
#define CV_VIDEOIO_API_H_

#ifdef __cplusplus
#include <opencv2/videoio.hpp>
extern "C" {
#endif  

#include "core.h"

typedef cv::VideoCapture* VideoCapturePtr;

VideoCapturePtr _cv_new_videocapture();
int _cv_videocapture_read(VideoCapturePtr v, MatPtr buf);
bool _cv_videocapture_opendevice(VideoCapturePtr v, int device);

#ifdef __cplusplus
}
#endif

#endif