#pragma once
/*Don't use window creation in the player draw script.If you do it will causes an infinite loop*/
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
#include"GLWarpper.h"
#include"UserdataTest.h"
//#include"GLFW_Window.h"

void Create_Lua();
void Register_C_Functions();
int Example_Lua_FUNCTION(lua_State* L);
lua_State* Get_Lua_State();
//void Alloc_LUA(void* ud, void* ptr, size_t osize, size_t nsize);
