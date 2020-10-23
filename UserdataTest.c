/*
 * Userdata.c
 *
 *  Created on: Jul 27, 2020
 *      Author: admin
 */
#include"UserdataTest.h"

typedef struct test22{
	int test;
	float test2;
}test22;
luaL_Reg *library;
luaL_Reg library_test[] = {
		{"new",newtest},
		{"set",settest},
		{NULL,NULL}
};
int newtest(lua_State *L){
	//int arg0 = luaL_checkinteger(L,1);
	float arg1 = luaL_checknumber(L,2);
	test22 *Object = (test22*)lua_newuserdata(L,sizeof(test22));
return 1;
}
int settest(lua_State *L){
return 0;
}
int initUserData(lua_State *L){
	//luaL_getsubtable(L, LUA_REGISTRYINDEX, LUA_PRELOAD_TABLE);
	//lua_pushcfunction(L, luaopen_modname);
	//lua_setfield(L, -2, modname);
	//lua_pop(L, 1);  // remove PRELOAD table
    luaL_requiref(L, library->name, library->func, 1);
    lua_pop(L, 1);
	//luaL_openlib(Get_Lua_State(),"test",library_test,0);
	return 1;
}





