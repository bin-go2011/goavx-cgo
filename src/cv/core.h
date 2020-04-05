#ifndef CV_CORE_API_H_
#define CV_CORE_API_H_

#ifdef __cplusplus
#include <opencv2/opencv.hpp>
extern "C" {
#endif  

typedef cv::Mat* MatPtr;

MatPtr cv_new_mat();

#ifdef __cplusplus
}
#endif
#endif