#include "itemLUA.h"

void scriptable_item_use()
{
}

void scriptable_init_item()
{
}

int scriptable_item_use_wrapper(lua_State* L)
{
	return 0;
}

int scriptable_init_item_wrapper(lua_State* L)
{
	scriptable_init_item();
	//lua_gethook(L);
	return 0;
}
