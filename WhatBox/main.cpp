#include "cEngine.h"










cEngine g_Engine; // ���α׷����� ����



LRESULT WINAPI MsgProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
	g_Engine.MsgProc(hWnd, msg, wParam,lParam); // �������� �޼������ν��� ���� ����

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
	g_Engine.Create(hInst, "WhatBox", 1920, 1080, MsgProc, false); // ���α׷� �ʱ�ȭ
	g_Engine.MsgLoop(); // ���α׷� ����
	return g_Engine.CleanUp(); // ���α׷� ����
}

