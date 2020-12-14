// SimpleH264Analyzer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Stream.h"

int main(int argc, char * argv[])
{	
	CStreamFile h264stream("/Users/lichi/EyerWand/EyerLib/Lib/EyerAVCTest/demo_video_176x144_baseline.h264");

	h264stream.Parse_h264_bitstream();

	return 0;
}

