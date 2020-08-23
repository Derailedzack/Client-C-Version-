#pragma once

#include <stdbool.h>
#include"Window.h"
#include "RenderEntities.h"
#include<SDL.h>
#include<glad/glad.h>
#include<lua.h>
SDL_Window* SDL_window;
SDL_Renderer* SDL_renderer;
SDL_Event SDL_event;
SDL_GLContext SDL_context;
int SDL_window_width;
int SDL_window_height;
void SDL2_CreateWindow(int w,int h);
void SDL2_RenderLoop();
void SDL2_ErrorCallback(int error, const char* description);
void SDL2_GL_ErrorCallback();
void SDL2_FramebuffersizeCallback(int width, int height);
void SDL2_KeyCallback(int key, int scancode, int action, int mods);
void SDL2_GL_CreateWindow(int w,int h);
void SDL2_GL_RenderLoop();
int SDL2_CreateWindowWrapper(lua_State* L);
int SDL2_RenderLoopWrapper(lua_State* L);
int SDL2_ShowSimpleMessageBoxWrapper(lua_State* L);
int SDL2_SetRenderDrawColor(lua_State* L);
int SDL2_RenderClearWrapper(lua_State* L);
int SDL2_RenderDrawLine(lua_State* L);
