#include "highgui.h"

void cv_named_window(const char* winname, int flags)
{
    cv::namedWindow(winname, flags);
} 

int cv_wait_key(int delay = 0) {
    return cv::waitKey(delay);
}

void cv_imshow(const char* winname, MatPtr mat)
{
    cv::imshow(winname, *mat);
}

void cv_destroy_window(const char* winname)
{
    cv::destroyWindow(winname);
}