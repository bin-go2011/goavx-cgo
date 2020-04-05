#ifndef AV_FORMAT_API_H
#define AV_FORMAT_API_H

#ifdef __cplusplus
extern "C" {
#endif        

#include <libavformat/avformat.h>

AVFormatContext* av__format_open_input(char* filename);
void  av__format_close_input(AVFormatContext* fmt_ctx);
void  av__dump_format(AVFormatContext* fmt_ctx, char* filename);
int av__find_best_stream(AVFormatContext* fmt_ctx, AVMediaType media_type);
int av__read_frame(AVFormatContext *fmt_ctx, AVPacket *pkt);

#ifdef __cplusplus
}
#endif
#endif