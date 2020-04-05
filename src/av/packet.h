#ifndef AV_PACKET_API_H
#define AV_PACKET_API_H

#ifdef __cplusplus
extern "C" {
#endif  

#include <libavcodec/avcodec.h>

void av__init_packet(AVPacket* pkt);
AVPacket* av__packet_alloc(void);
void av__free_packet(AVPacket *pkt);

#ifdef __cplusplus
}
#endif
#endif