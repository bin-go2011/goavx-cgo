#ifndef CV_IMGPROC_API_H_
#define CV_IMGPROC_API_H_

#ifdef __cplusplus
#include <opencv2/imgproc.hpp>
extern "C" {
#endif  

#include "core.h"

void _cv_gaussian_blur(MatPtr src, MatPtr dst, int ksizeX, int ksizeY, double sigmaX, double sigmaY, int borderType);
void _cv_pyrdown(MatPtr src, MatPtr dst);
void _cv_canny(MatPtr image, MatPtr edges, double threshold1, double threshold2, int apertureSize, bool L2gradient);
void _cv_cvt_color(MatPtr src, MatPtr dst, int code);
void _cv_median_blur(MatPtr src, MatPtr dst, int ksize);
void _cv_laplacian(MatPtr src, MatPtr dst, int ddepth, int ksize = 1, double scale = 1, double delta = 0,
                             int borderType = cv::BORDER_DEFAULT );
void _cv_threshold(MatPtr src, MatPtr dst, double thresh, double maxval, int type );
void _cv_resize(MatPtr src, MatPtr dst, cv::Size dsize, double fx = 0, double fy = 0,
                          int interpolation = cv::INTER_LINEAR );

#ifdef __cplusplus
}
#endif

#endif