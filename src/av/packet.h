#ifndef AV_PACKET_API_H
#define AV_PACKET_API_H

#ifdef __cplusplus
extern "C" {
#endif  

#include <libavcodec/avcodec.h>

void _av_init_packet(AVPacket* pkt);
AVPacket* _av_packet_alloc(void);
void _av_free_packet(AVPacket *pkt);

#ifdef __cplusplus
}
#endif
#endif