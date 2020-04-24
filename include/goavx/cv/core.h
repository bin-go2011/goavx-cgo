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

int _cv_version();

MatPtr _cv_new_mat();
MatPtr _cv_new_mat_with(int width, int height, int matType);
MatPtr _cv_new_mat_from_size(cv::Size size, int type);
void _cv_release_mat(MatPtr mat);

int _cv_mat_channels(MatPtr mat);
void _cv_mat_size(MatPtr mat, int* width, int* height);

#ifdef __cplusplus
}
#endif
#endif