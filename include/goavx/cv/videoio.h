#ifndef CV_VIDEOIO_API_H_
#define CV_VIDEOIO_API_H_

#ifdef __cplusplus
#include <opencv2/videoio.hpp>
extern "C" {
#endif  

#include "core.h"

#ifdef __cplusplus
typedef cv::VideoCapture* VideoCapturePtr;
#else
typedef void* VideoCapturePtr;
#endif

VideoCapturePtr _cv_new_videocapture();
int _cv_videocapture_read(VideoCapturePtr cap, MatPtr buf);
int _cv_videocapture_opendevice(VideoCapturePtr cap, int device);
void _cv_release_videocapture(VideoCapturePtr cap);

#ifdef __cplusplus
}
#endif

#endif