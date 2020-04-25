#include "imgproc.h"

void _cv_gaussian_blur(MatPtr src, MatPtr dst, int ksizeX, int ksizeY, double sigmaX, double sigmaY, int borderType)
{
    cv::GaussianBlur(*src, *dst, cv::Size(ksizeX, ksizeY), sigmaX, sigmaY, borderType);
}

void _cv_pyrdown(MatPtr src, MatPtr dst)
{
    cv::pyrDown(*src, *dst);
}

void _cv_canny( MatPtr image, MatPtr edges, double threshold1, double threshold2, int apertureSize, bool L2gradient)
{
    cv::Canny(*image, *edges, threshold1, threshold2, apertureSize, L2gradient);
}

void _cv_cvt_color( MatPtr src, MatPtr dst, int code)
{
    cv::cvtColor(*src, *dst, code);
}

void _cv_median_blur(MatPtr src, MatPtr dst, int ksize)
{
    cv::medianBlur(*src, *dst, ksize);
}

void _cv_laplacian(MatPtr src, MatPtr dst, int ddepth, int ksize, double scale, double delta, int borderType )
{
    cv::Laplacian(*src, *dst, ddepth, ksize, scale, delta, borderType);
}

void _cv_threshold(MatPtr src, MatPtr dst, double thresh, double maxval, int type )
{
    cv::threshold(*src, *dst, thresh, maxval, type);
}

void _cv_resize(MatPtr src, MatPtr dst, cv::Size dsize, double inv_scale_x, double inv_scale_y, int interpolation)
{
    cv::resize(*src, *dst, dsize, inv_scale_x, inv_scale_y, interpolation);
}

void _cv_bilateral_filter( MatPtr src, MatPtr dst, int d,
                                   double sigmaColor, double sigmaSpace,
                                   int borderType)
{
    cv::bilateralFilter(*src, *dst, d, sigmaColor, sigmaSpace, borderType);
}