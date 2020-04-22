#ifndef CV_IMGCODECS_API_H_
#define CV_IMGCODECS_API_H_

#ifdef __cplusplus
#include <opencv2/imgcodecs.hpp>
extern "C" {
#endif  

#include "core.h"

int _cv_imread(const char* filename, int flags, MatPtr mat);
bool _cv_imwrite(const char* filename, MatPtr mat);

#ifdef __cplusplus
}
#endif

#endif
