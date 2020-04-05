#include "util.h"

AVFrame *av__frame_alloc(void)
{
    AVFrame* frame = av_frame_alloc();
    printf("new AVFrame %p\n", frame);
    return frame;
}

void av__frame_free(AVFrame *frame)
{
    printf("free AVFrame %p\n", frame);
    av_frame_free(&frame);
}

int av__get_bytes_per_sample(enum AVSampleFormat sample_fmt)
{
    return av_get_bytes_per_sample(sample_fmt);
}
