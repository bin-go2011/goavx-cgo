#ifndef CV_CORE_API_H_
#define CV_CORE_API_H_

#ifdef __cplusplus
#include <opencv2/core.hpp>
extern "C" {
#endif  

#ifdef __cplusplus
typedef cv::Mat* MatPtr;
#else
typedef void* MatPtr;
#endif

int cv_version();

MatPtr cv_new_mat();

#ifdef __cplusplus
}
#endif
#endif