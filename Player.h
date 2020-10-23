#pragma once
#include"Entity.h"
#include"Window.h"
#include "SDL2_Window.h"
#include"Inventory.h"
#include<stdio.h>
#include"LuaUtils.h"
#include<glad/glad.h>
#include <stdlib.h>
#include"Client_log.h"
#include"EntityCollisionTest.h"
EntityData* Player_data;
//Fixme:Player rendering in lua
//Item null_item = { "","",0,0,0 };

Slot inventory[26];
void Player_init();
void Player_draw();
void Player_redraw();
void Player_draw_inventory();
void Player_redraw_inventory();
void Player_set_item_in_slot(Item item, Slot slot);
void Player_set_item_in_inventory(Item item);
void Player_create_inventory();
void Player_CollisionCheck();
