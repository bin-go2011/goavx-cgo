#include "packet.h"

void av__init_packet(AVPacket* pkt)
{
    av_init_packet(pkt);
}

AVPacket* av__packet_alloc(void)
{
    AVPacket* pkt = av_packet_alloc();
    printf("new AVPacket %p\n", pkt);
    return pkt;
}

void av__free_packet(AVPacket *pkt)
{
	printf("free AVPacket %p\n", pkt);
    av_free_packet(pkt);
}
