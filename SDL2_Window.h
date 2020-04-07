#pragma once
#include<SDL.h>
#include <stdbool.h>
SDL_Renderer* render;
SDL_Window* window;
SDL_Event* e;
bool SDL2_LOOP;

void SDL2_CreateWindow(int w,int h);
void SDL2_RenderLoop();