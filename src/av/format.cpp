#include "format.h"
#include "common/utils.h"

AVFormatContext* _av_format_open_input(char* filename) {
	AVFormatContext *fmt_ctx = NULL;

    int ret;
    if ((ret = avformat_open_input(&fmt_ctx, filename, NULL, NULL)) < 0)
    {
        return NULL;
    }

    // retrieve stream information
    if (ret = (avformat_find_stream_info(fmt_ctx, NULL)) < 0)
    {
        return NULL;
    }

    printf("new AVFormatContext %p\n", fmt_ctx);
    return fmt_ctx;
}

void _av_format_close_input(AVFormatContext* fmt_ctx) {
	printf("free AVFormatContext %p\n", fmt_ctx);
    if (fmt_ctx == NULL) {
        return;
    }

    avformat_close_input(&fmt_ctx);
	free(fmt_ctx);
}

void  _av_dump_format(AVFormatContext* fmt_ctx, char* filename)
{
    if (fmt_ctx == NULL) {
        return;
    }

    av_dump_format(fmt_ctx, 0, filename, 0);
}

int _av_find_best_stream(AVFormatContext* fmt_ctx, AVMediaType media_type)
{
    if (fmt_ctx == NULL) {
        return -1;
    }

    return av_find_best_stream(fmt_ctx, media_type, -1, -1, NULL, 0);
}

int _av_read_frame(AVFormatContext *fmt_ctx, AVPacket *pkt)
{
	if (fmt_ctx == NULL) {
		return -1;
	}
	
	int ret = av_read_frame(fmt_ctx, pkt);
	//printf("pkt %p\n", pkt);
    //printf("pkt data %p\n", pkt->data);
	//printf("pkt stream_index %p\n", &(pkt->stream_index));
	// print_payload((const unsigned char*)(pkt->data), pkt->size);
    //printf("pkt size %p, offset=%d\n", &(pkt->size), (char*)&(pkt->size) - (char*)pkt);
    //printf("pkt size=%d, stream_index=%d\n", pkt->size, pkt->stream_index);

    return ret;
}

unsigned _av_format_version()
{
    return avformat_version();
}


