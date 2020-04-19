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
void _cv_release_mat(MatPtr mat);

int _cv_mat_rows(MatPtr mat);
int _cv_mat_cols(MatPtr mat);

#ifdef __cplusplus
}
#endif
#endif