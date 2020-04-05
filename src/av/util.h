#ifndef AV_UTIL_API_H
#define AV_UTIL_API_H

#ifdef __cplusplus
extern "C" {
#endif  

#include <libavutil/frame.h>

AVFrame* av__frame_alloc(void);
void av__frame_free(AVFrame *frame);
int av__get_bytes_per_sample(enum AVSampleFormat sample_fmt);

#ifdef __cplusplus
}
#endif
#endif