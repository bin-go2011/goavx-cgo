#include "core.h"

int _cv_version() {
	return (CV_VERSION_MAJOR << 16) | (CV_VERSION_MINOR << 8) | (CV_VERSION_REVISION);
}

MatPtr _cv_new_mat()
{
    return new cv::Mat();
}

void _cv_release_mat(MatPtr mat)
{
    delete mat;
}

int _cv_mat_channels(MatPtr mat)
{
    return mat->channels();
}