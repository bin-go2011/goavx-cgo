#ifndef AV_CODEC_API_H
#define AV_CODEC_API_H

#ifdef __cplusplus
extern "C" {
#endif        

#include <libavformat/avformat.h>

AVCodecContext* av__codec_open_context(AVFormatContext* fmt_ctx, int stream_idx);
void av__codec_free_context(AVCodecContext* avctx);

int av__codec_decode_audio4(AVCodecContext *avctx,
                                              AVFrame *frame,
                                              int *got_frame_ptr,
                                              AVPacket *avpkt);

#ifdef __cplusplus
}
#endif
#endif