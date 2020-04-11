#include "highgui.h"

void _cv_named_window(const char* winname, int flags)
{
    cv::namedWindow(winname, flags);
} 

int _cv_wait_key(int delay = 0) {
    return cv::waitKey(delay);
}

void _cv_imshow(const char* winname, MatPtr mat)
{
    cv::imshow(winname, *mat);
}

void _cv_destroy_window(const char* winname)
{
    cv::destroyWindow(winname);
}