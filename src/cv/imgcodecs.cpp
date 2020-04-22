#include "imgcodecs.h"

int _cv_imread(const char* filename, int flags, MatPtr mat)
{
    *mat = cv::imread(filename, flags);

    if( mat->empty() ) return -1;
    return 0;
}

bool _cv_imwrite(const char* filename, MatPtr mat)
{
    if ( mat->empty() ) return false;
    
    cv::imwrite(filename, *mat);
    return true;
}