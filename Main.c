
#include"Main.h"
#include "EntityLoader.h"
#include"Client.h"

#include<stdio.h>
#include"GDIDisplay.h"
#include"SDL2_Window.h"
#include "Player.h"
#include"LuaUtils.h"
#include"LevelLoader.h"
#include <signal.h>
//Todo:Find a crash reporting library if necessary implement it myself
//Todo:Find a discord library
//I'm not sure why I have quite a few of duplicated code
//That should have been caught and fixed

//#include <xkeycheck.h>
#include "CuteSound.h"
#include"TestLevel.h"
#undef main
LevelData data;
bool net_test;
FILE* client_data_log;
FILE* file;

char padding[600];
//const char* data[25+16];
void segv_handler(int signal){
	exit(-223);
}
int main(int argc, char* argv[]) {

	SDL_Init(SDL_INIT_EVERYTHING);
	Player_init();
	Collsion_init();
	
	LoadLevel();
	
	Client_Logger_Log(DEBUG,"Test!");
	
	return 0;
}
