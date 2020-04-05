#include "codec.h"
//#include "utils.h"

/* Enable or disable frame reference counting. You are not supposed to support
 * both paths in your application but pick the one most appropriate to your
 * needs. Look for the use of refcount in this example to see what are the
 * differences of API usage between them. */
static int refcount = 0;

AVCodecContext* _av_codec_open_context(AVFormatContext* fmt_ctx, int stream_idx)
{
    if (fmt_ctx == NULL) {
        return NULL;
    }

    if (stream_idx <0 || stream_idx >= fmt_ctx->nb_streams) {
        return NULL;
    }

    int ret;
    AVStream *st;
    AVCodec *dec = NULL;
    AVCodecContext* dec_ctx = NULL;
    AVDictionary *opts = NULL;

    st = fmt_ctx->streams[stream_idx];

    /* find decoder for the stream */
    dec = avcodec_find_decoder(st->codecpar->codec_id);
    if (!dec) {
        return NULL;
    }

    /* Allocate a codec context for the decoder */
    dec_ctx = avcodec_alloc_context3(dec);
    if (!dec_ctx) {
        return NULL;
    }

    /* Copy codec parameters from input stream to output codec context */
    if ((ret = avcodec_parameters_to_context(dec_ctx, st->codecpar)) < 0) {
        return NULL;
    }

    /* Init the decoders, with or without reference counting */
    av_dict_set(&opts, "refcounted_frames", refcount ? "1" : "0", 0);
    if ((ret = avcodec_open2(dec_ctx, dec, &opts)) < 0) {
        return NULL;
    }

    printf("new AVCodecContext %p\n", dec_ctx);
    return dec_ctx;
}

void _av_codec_free_context(AVCodecContext* avctx)
{
    printf("free AVCodecContext %p\n", avctx);
    if (avctx == NULL) {
        return;
    }

    avcodec_free_context(&avctx);
}

int _av_codec_decode_audio4(AVCodecContext *avctx,
                                              AVFrame *frame,
                                              int *got_frame_ptr,
                                              AVPacket *avpkt)
{
    int ret = avcodec_decode_audio4(avctx, frame, got_frame_ptr, avpkt);
	// size_t unpadded_linesize = frame->nb_samples * av_get_bytes_per_sample((AVSampleFormat)frame->format);
	// print_payload((const unsigned char*)frame->extended_data[0], unpadded_linesize);
	return ret;
}                                              

unsigned _av_codec_version() 
{
    return avcodec_version();
}