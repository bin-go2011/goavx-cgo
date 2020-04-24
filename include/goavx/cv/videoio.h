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
int _cv_videocapture_open_device(VideoCapturePtr cap, int device);
void _cv_release_videocapture(VideoCapturePtr cap);
int _cv_videocapture_open_file(VideoCapturePtr cap, const char* filename);
bool _cv_videocapture_is_opened(VideoCapturePtr cap);
void _cv_videocapture_get(VideoCapturePtr cap, int propId, double* propValue);

#ifdef __cplusplus
}
#endif

#endif