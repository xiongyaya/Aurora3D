#include<iostream>
#include<string>
extern "C"
{
	#include<lua.h>
	#include<lauxlib.h>
	#include<lualib.h>
}



int main()
{
	using namespace std;
	lua_State *L = luaL_newstate();
	int ret = luaL_loadfile(L, "hello.lua");
	if (ret) return -1;
	ret = lua_pcall(L, 0, 0, 0);
	if (ret) return -1;
	lua_getglobal(L, "string");
	std::string str = lua_tostring(L, -1);
	std::cout << "string:" << str << std::endl;
	lua_getglobal(L, "tbl");
	lua_getfield(L, -1, "name");
	str = lua_tostring(L, -1);
	std::cout << "name:" << str << std::endl;

	lua_getglobal(L, "add");
	lua_pushnumber(L, 10);
	lua_pushnumber(L, 20);
	ret = lua_pcall(L, 2, 1, 0);
	if (ret) { cout << "errer" << endl; return -1;; }
	if(lua_isnumber(L, -1))
	{
		double val = lua_tonumber(L, -1);
		cout << "value:"<<val << endl;
	}
	lua_close(L);
	getchar();
	return 0;
}
