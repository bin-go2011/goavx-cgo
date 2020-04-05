#ifndef AV_FORMAT_API_H
#define AV_FORMAT_API_H

#ifdef __cplusplus
extern "C" {
#endif        

#include <libavformat/avformat.h>

AVFormatContext* _av_format_open_input(char* filename);
void  _av_format_close_input(AVFormatContext* fmt_ctx);
void  _av_dump_format(AVFormatContext* fmt_ctx, char* filename);
int _av_find_best_stream(AVFormatContext* fmt_ctx, AVMediaType media_type);
int _av_read_frame(AVFormatContext *fmt_ctx, AVPacket *pkt);

#ifdef __cplusplus
}
#endif
#endif