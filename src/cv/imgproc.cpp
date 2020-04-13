#include "imgproc.h"

void _cv_gaussian_blur(MatPtr src, MatPtr dst, int ksizeX, int ksizeY, double sigmaX, double sigmaY, int borderType)
{
    cv::GaussianBlur(*src, *dst, cv::Size(ksizeX, ksizeY), sigmaX, sigmaY, borderType);
}

void _cv_pyrdown(MatPtr src, MatPtr dst)
{
    cv::pyrDown(*src, *dst);
}

void _cv_canny( MatPtr image, MatPtr edges, double threshold1, double threshold2, int apertureSize, int L2gradient)
{
    cv::Canny(*image, *edges, threshold1, threshold2, apertureSize, L2gradient);
}

void _cv_cvt_color( MatPtr src, MatPtr dst, int code)
{
    cv::cvtColor(*src, *dst, code);
}