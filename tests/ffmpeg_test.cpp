// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include <catch.hpp>

extern "C" {
#include "av/format.h"
#include "av/codec.h"
#include "av/packet.h"
#include "av/util.h"
#include "config.h"
}

char* SAMPLE_TESTING_FILE = SAMPLE_FILE_PATH;

TEST_CASE("format context", "[avformat]" ) {
    AVFormatContext* fmt_ctx = _av_format_open_input(SAMPLE_TESTING_FILE);
    
    SECTION("dump input format"){
	    _av_dump_format(fmt_ctx, SAMPLE_TESTING_FILE);
    }

    SECTION("find best audio stream") {
        int ret = _av_find_best_stream(fmt_ctx, AVMEDIA_TYPE_AUDIO);
		REQUIRE(ret == 0);
    }

    SECTION("find best video stream") {
        int ret = _av_find_best_stream(fmt_ctx, AVMEDIA_TYPE_VIDEO);
		REQUIRE(ret == 1);
	}
    SECTION("read packet") {
        AVPacket* pkt = _av_packet_alloc();
        _av_read_frame(fmt_ctx, pkt);
    }
}

TEST_CASE("codec context", "[avcodec]") {
    AVFormatContext* fmt_ctx = _av_format_open_input(SAMPLE_TESTING_FILE);
    SECTION("open audio codec") {
        AVCodecContext* dec_ctx = _av_codec_open_context(fmt_ctx, 0);
    }
    SECTION("decode stream") {
        AVCodecContext* dec_ctx = _av_codec_open_context(fmt_ctx, 0);
        AVPacket* pkt = _av_packet_alloc();
        _av_read_frame(fmt_ctx, pkt);

        AVFrame* frame = _av_frame_alloc();
        int got_frame = 0;
        int ret = _av_codec_decode_audio4(dec_ctx, frame, &got_frame, pkt);
        printf("ret %d\n", ret);
    }
}