
#include"Client.h"
#include"SDL2_Window.h"
#include<stdio.h>
#include<SDL.h>
int main(int argc, char* argv[]) {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "SDL 2 Error", SDL_GetError(), NULL);
}
	SDL2_CreateWindow(0, 0);
	printf("Version %i.%i.%i-(%s)", GetClientVersion().major, GetClientVersion().minor, GetClientVersion().patch, GetClientVersion().Build_Type);
	return 0;
}
