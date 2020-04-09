#ifndef AV_UTIL_API_H
#define AV_UTIL_API_H

#ifdef __cplusplus
extern "C" {
#endif  

#include <libavutil/frame.h>

AVFrame* _av_frame_alloc(void);
void _av_frame_free(AVFrame* frame);
int _av_get_bytes_per_sample(enum AVSampleFormat sample_fmt);

#ifdef __cplusplus
}
#endif
#endif