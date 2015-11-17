#pragma once
#include <Windows.h>


#define DEF_TYPE static const
















class NetDefine
{
public:
	DEF_TYPE BYTE NOT_FRAGMENTED = 0x00;
	DEF_TYPE BYTE FRAGMENTED = 0x01;

	DEF_TYPE BYTE NOT_LASTMSG = 0x00;
	DEF_TYPE BYTE LASTMSG = 0x01;

	DEF_TYPE BYTE ACCEPTED = 0x01;
	DEF_TYPE BYTE DENIED = 0x00;

	DEF_TYPE BYTE YES = 0x01;
	DEF_TYPE BYTE NO = 0x00;

	DEF_TYPE BYTE FAIL = 0x00;
	DEF_TYPE BYTE SUCCESS = 0x01;
};


#undef DEF_TYPE