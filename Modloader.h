#pragma once
//Todo:Implement the modloader
//Note: CreateSound is currently useless as there is no sound implemented
typedef void (Mod_INIT_Function)();
typedef void (Mod_CreateScript)();
typedef void (Mod_CreateEntity)();
typedef void (Mod_CreateSound)();
typedef struct ModInfo{
	const char* name;
	Mod_INIT_Function* mod_init_func;

}ModInfo;
#include<Windows.h>
void LoadMod(const char* path);
void CreateEntity(const char* path);
void CreateSound(const char* path);
void CreateScript(const char* path);
