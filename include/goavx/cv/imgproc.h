#ifndef CV_IMGPROC_API_H_
#define CV_IMGPROC_API_H_

#ifdef __cplusplus
#include <opencv2/imgproc.hpp>
extern "C" {
#endif  

#include "core.h"

void _cv_gaussian_blur(MatPtr src, MatPtr dst, int ksizeX, int ksizeY, double sigmaX, double sigmaY, int borderType);

#ifdef __cplusplus
}
#endif

#endif