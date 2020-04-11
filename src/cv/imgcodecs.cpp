#include "imgcodecs.h"

int _cv_imread(const char* filename, int flags, MatPtr mat)
{
    *mat = cv::imread(filename, flags);

    if( mat->empty() ) return -1;
    return 0;
}