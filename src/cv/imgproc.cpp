#include "imgproc.h"

void _cv_gaussian_blur(MatPtr src, MatPtr dst, int ksizeX, int ksizeY, double sigmaX, double sigmaY, int borderType)
{
    cv::GaussianBlur(*src, *dst, cv::Size(ksizeX, ksizeY), sigmaX, sigmaY, borderType);
}

void _cv_pyrdown(MatPtr src, MatPtr dst)
{
    cv::pyrDown(*src, *dst);
}