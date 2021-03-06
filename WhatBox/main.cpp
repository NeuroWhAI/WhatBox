#include "cEngine.h"










cEngine g_Engine; // 프로그램엔진 생성



LRESULT WINAPI MsgProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
	g_Engine.MsgProc(hWnd, msg, wParam,lParam); // 엔진에게 메세지프로시져 정보 전달

	switch( msg )
	{
	case WM_DESTROY:
		PostQuitMessage( 0 );
		return 0;
	}

	return DefWindowProc( hWnd, msg, wParam, lParam );
}


INT WINAPI wWinMain( HINSTANCE hInst, HINSTANCE, LPWSTR, INT cmd )
{
	g_Engine.Create(hInst, "WhatBox", 1920, 1080, MsgProc, false); // 프로그램 초기화
	g_Engine.MsgLoop(); // 프로그램 루프
	return g_Engine.CleanUp(); // 프로그램 종료
}

