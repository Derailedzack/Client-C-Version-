#pragma once
#include<Windows.h>

HWND hwnd;
void GDI_DrawAll();
LRESULT CALLBACK GDI_Windowcallback(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
void GDI_CreateWin(int w, int h);

void GDI_EVENT_LOOP();
void GDI_ShowWin();