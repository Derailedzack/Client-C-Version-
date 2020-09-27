#include "LuaUtils.h"
lua_State* state;
void Create_Lua()
{
	
	state = luaL_newstate();
		luaL_openlibs(state);

}

void Register_C_Functions()
{
	lua_register(state, "Test_func", Example_Lua_FUNCTION);
	lua_register(state, "GlBegin", GLBeginWrapper);
	lua_register(state, "GlVertex3", GLVertexWrapper);
	lua_register(state, "GlColor3", GLColorWrapper);
	lua_register(state, "GlEnd", GLEndWrapper);
	lua_register(state,"InitTestUserdata",initUserData);
}

int Example_Lua_FUNCTION(lua_State* L)
{
	if (lua_rawget(L, -1) == LUA_TFUNCTION) {
		lua_call(L, 1, 0);
	}
	else {
		printf("lua_rawget(L, -1):%i",lua_rawget(L, -1));
	}
	return 0;
}

lua_State* Get_Lua_State()
{
	return state;
}
