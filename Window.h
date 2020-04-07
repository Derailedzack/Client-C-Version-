#pragma once
#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480
typedef void(Create_Window_Func)(int w, int h);
typedef void (RenderLoop_func)();
typedef void (Destroy_Window_func)();
typedef void (OnRenderingFinished_func)();
typedef void (OnRenderingFailure_func)();



void CreateWindow(Create_Window_Func* create_window);
void RenderLoop(RenderLoop_func* renderloop);
void DestroyWindow(Destroy_Window_func* destroywindow);
void OnRenderingFinished(OnRenderingFinished_func* onrenderingfinished);
void OnRenderingFailure(OnRenderingFailure_func* onrenderingfailure);
void Tick();
