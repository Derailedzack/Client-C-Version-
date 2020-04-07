#include "Window.h"
void CreateWindow(Create_Window_Func* create_window)
{
	(create_window)(WINDOW_WIDTH,WINDOW_HEIGHT);
}

void RenderLoop(RenderLoop_func* renderloop)
{
	(renderloop)();
}

void DestroyWindow(Destroy_Window_func* destroywindow)
{
	(destroywindow)();
}

void OnRenderingFinished(OnRenderingFinished_func* onrenderingfinished)
{
	(onrenderingfinished)();
}

void OnRenderingFailure(OnRenderingFailure_func* onrenderingfailure)
{
	(onrenderingfailure)();
}

void Tick()
{
}
