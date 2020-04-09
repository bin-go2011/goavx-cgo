#ifndef AV_CODEC_API_H
#define AV_CODEC_API_H

#ifdef __cplusplus
extern "C" {
#endif        

#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>

void _av_init_packet(AVPacket* pkt);
AVPacket* _av_packet_alloc(void);
void _av_free_packet(AVPacket *pkt);

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