// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include <catch.hpp>

extern "C" {
#include "av/format.h"
#include "av/codec.h"
#include "av/packet.h"
#include "av/util.h"
}

char* SAMPLE_FILE_PATH = R"(C:\Users\bji\Desktop\cv\ffmpeg-cgo\samples\big_buck_bunny.mp4)";

TEST_CASE("format context", "[avformat]" ) {
    AVFormatContext* fmt_ctx = av__format_open_input(SAMPLE_FILE_PATH);
    
    SECTION("dump input format"){
	    av__dump_format(fmt_ctx, SAMPLE_FILE_PATH);
    }

    SECTION("find best audio stream") {
        int ret = av__find_best_stream(fmt_ctx, AVMEDIA_TYPE_AUDIO);
		REQUIRE(ret == 0);
    }

    SECTION("find best video stream") {
        int ret = av__find_best_stream(fmt_ctx, AVMEDIA_TYPE_VIDEO);
		REQUIRE(ret == 1);
	}
    SECTION("read packet") {
        AVPacket* pkt = av__packet_alloc();
        av__read_frame(fmt_ctx, pkt);
    }
}

TEST_CASE("codec context", "[avcodec]") {
    AVFormatContext* fmt_ctx = av__format_open_input(SAMPLE_FILE_PATH);
    SECTION("open audio codec") {
        AVCodecContext* dec_ctx = av__codec_open_context(fmt_ctx, 0);
    }
    SECTION("decode stream") {
        AVCodecContext* dec_ctx = av__codec_open_context(fmt_ctx, 0);
        AVPacket* pkt = av__packet_alloc();
        av__read_frame(fmt_ctx, pkt);

        AVFrame* frame = av__frame_alloc();
        int got_frame = 0;
        int ret = av__codec_decode_audio4(dec_ctx, frame, &got_frame, pkt);
        printf("ret %d\n", ret);
    }
}