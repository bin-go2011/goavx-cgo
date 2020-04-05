#ifndef CV_HIGHGUI_API_H_
#define CV_HIGHGUI_API_H_

#ifdef __cplusplus
#include <opencv2/highgui.hpp>
extern "C" {
#endif  

#include "core.h"

void cv_named_window(const char* name, int flags);
int cv_wait_key(int delay);
void cv_imshow(const char* winname, MatPtr mat);
void cv_destroy_window(const char* winname);

#ifdef __cplusplus
}
#endif

#endif