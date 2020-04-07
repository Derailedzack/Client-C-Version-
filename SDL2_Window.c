#include "SDL2_Window.h"


void SDL2_CreateWindow(int w, int h)
{
	if (SDL_CreateWindowAndRenderer(w, h, SDL_WINDOW_SHOWN, &window, &render) == -1) {
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Error", "SDL 2 Failed to create the window and renderer.", NULL);
	}
	else {

	}
}

void SDL2_RenderLoop()
{
	while (SDL2_LOOP == true) {
		SDL_PollEvent(e);
	}
}
