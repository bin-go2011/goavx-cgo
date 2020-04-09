#ifndef AV_CODEC_API_H
#define AV_CODEC_API_H

#ifdef __cplusplus
extern "C" {
#endif        

#include <libavformat/avformat.h>

AVCodecContext* _av_codec_open_context(AVFormatContext* fmt_ctx, int stream_idx);
void _av_codec_free_context(AVCodecContext* avctx);

int _av_codec_decode_audio4(AVCodecContext *avctx,
                                              AVFrame *frame,
                                              int *got_frame_ptr,
                                              AVPacket *avpkt);

unsigned _av_codec_version();

#ifdef __cplusplus
}
#endif
#endif