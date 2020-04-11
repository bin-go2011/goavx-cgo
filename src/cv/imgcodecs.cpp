#include "imgcodecs.h"

void _cv_imread(const char* filename, int flags, MatPtr mat)
{
    *mat = cv::imread(filename, flags);
}