#include "Player.h"

#include <stdlib.h>

SDL_Rect Entity_Plr_spr;
SDL_Rect Entity_Plr_spr_test;
SDL_Texture* Player_Sprite_tex;
SDL_Surface* Player_Sprite;
float PlayerXpos = -0.566f;
float PlayerYpos = -0.566f;
void Player_init()
{
	Player_data = malloc(sizeof(EntityData));

	Player_data->Enitiy_Speed_Multiplier = 1;
	Player_data->Entity_ID = 1;
	Player_data->Entity_X_Speed = 2;
	Player_data->Entity_Y_Speed = 2;
	Player_data->name = "Player";
	Player_data->posX = 0.0f;
	Player_data->posY = 0.0f;
	Player_data->Entity_Size.width = 32;
	Player_data->Entity_Size.height = 32;
	
	if(Current_window == SDL){
		Entity_Plr_spr.x = 0;
		Entity_Plr_spr.y = 0;
		Entity_Plr_spr.w = 16;
		Entity_Plr_spr.h = 16;

		Player_Sprite = SDL_LoadBMP("res\\Image1.bmp");
	//Player_Sprite_tex = SDL_CreateTexture(SDL_renderer, SDL_PIXELFORMAT_RGBA32, SDL_TEXTUREACCESS_TARGET, 32, 32);
	Player_Sprite_tex = SDL_CreateTextureFromSurface(SDL_renderer, Player_Sprite);
	if (Player_Sprite == NULL) {
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Project", "Failed to load bitmap image!",SDL_window);
	}
	
	if (Player_Sprite_tex == NULL) {
		SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Project", "Failed to create SDL 2 Texture!", SDL_window);
	}
	}
}

void Player_draw()
{
	//printf("Current_window:%i", Current_window);
	if (Current_window == GL) {
		//glEnable(GL_DEPTH_TEST);
		glEnable(GL_2D);
		SDL_Log("glEnable:%i,GL_2D",glGetError());
		//glEnable(GL_LIGHTING);
		//glEnable(GL_LIGHT0);

#ifdef __OLD_CODE
		glEnable(GL_BLEND);
		SDL_Log("glEnable:%i,GL_BLEND",glGetError());
		glEnable(GL_FOG);
		SDL_Log("glEnable:%i,GL_FOG",glGetError());
		//glFogiv(GL_FOG_MODE, GL_LINEAR);
		//glFogiv(GL_FOG_DENSITY, 3);
		//glFogiv(GL_FOG_COLOR, 0, 1, 2);
		//glViewport(0, 0, width, height);
		//glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, GL_AMBIENT);
	//	glTranslatef(0.5f, 0.0f, 0.0f);

		glBlendFunc(GL_SRC_COLOR, GL_ONE_MINUS_CONSTANT_COLOR);
		//SDL_Log("glScaleF:%i,1.0f,1.0f,1.0f",glGetError());
		glScalef(1.0f, 1.0f, 1.0f);
		//SDL_Log("glColor3f:%i,10.0f,0.5f,0.5f",glGetError());
		glColor3f(10.0f, 0.5f, 0.5f);
		//SDL_Log("glBegin:%i,GL_POLYGON",glGetError());
		//glBlendFunc(GL_SRC_ALPHA, GL_SRC_COLOR);
		glBegin(GL_POLYGON);
		//SDL_Log("%i",glGetError());
		glColor3f(0.0f, 10.0f, 10.0f);
		//SDL_Log("%i",glGetError());
		glVertex3f(1.0f + Player_data->posX, 1.0f + Player_data->posY, 1.0f);
		//SDL_Log("%i",glGetError());
		glVertex3f(1.0f + Player_data->posX, 0.0f + Player_data->posY, 1.0f);
		glVertex3f(0.0f + Player_data->posX, 1.0f + Player_data->posY, 0.0f);
		glSecondaryColor3f(0.0f, 15.0f, 0.0f);
	glColor3f(10.0f, 0.0f, 10.0f);
	
	glVertex3f(-1.0f + Player_data->posX, -1.0f + Player_data->posY, -1.0f);
	glVertex3f(-1.0f + Player_data->posX, 0.0f + Player_data->posY, -1.0f);
	glVertex3f(0.0f + Player_data->posX, -1.0f + Player_data->posY, 0.0f);
	glColor3f(0.0f, 0.0, 10.0f);

	glEnd();
#endif
#ifdef _NEW_CODE
	glViewport(0, 0, 640, 480);
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 10.0f, 10.0f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 0.0f, 1.0f);
	
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glSecondaryColor3f(0.0f, 15.0f, 0.0f);
	glColor3f(10.0f, 0.0f, 10.0f);

	glVertex3f(-1.0f, -1.0f, -1.0f);
	glVertex3f(-1.0f, 0.0f, -1.0f);
	glVertex3f(0.0f, -1.0f, 0.0f);

	glColor3f(0.0f, 0.0, 10.0f);

	glEnd();
#endif

	//glBlendColor(1, 1, 10, 0);
	//glBlendFunc(GL_SRC_ALPHA, GL_SRC_COLOR);
	}
	else if (Current_window == SDL) {

		//SDL_RenderFillRect(SDL_renderer,&Entity_Plr_spr);
		//SDL_RenderDrawPoint(SDL_renderer,Entity_Plr_spr.x,Entity_Plr_spr.y);

		SDL_RenderCopy(SDL_renderer, Player_Sprite_tex,&Entity_Plr_spr, NULL);
          //SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,"Project","Failed to render the player!",SDL_window);
	
		SDL_RenderDrawRect(SDL_renderer, &Entity_Plr_spr);
				//SDL_SetRenderDrawColor(SDL_renderer, 255, 255, 255, 0);
	}
	else if(Current_window == LUA){
		lua_State* st = Get_Lua_State();
		printf("LuaStatePointer:%i", &st);
		luaL_dofile(Get_Lua_State(), "scripts/player_draw.lua");
	}
}

void Player_redraw()
{
	Player_draw();
}

void Player_draw_inventory()
{
}

void Player_redraw_inventory()
{
}

void Player_set_item_in_slot(Item item, Slot slot)
{
	slot.item = item;
}

void Player_set_item_in_inventory(Item item)
{
	for(int i = 0; i < 25; i++)
	{
		inventory[i].item = item;
	}
}

void Player_create_inventory()
{
	for (int i = 0; i < 25;  i++)
	{
		Item Player_Blank_Slot = {"(null)","(null)",0,0,NULL};

		Player_set_item_in_slot(Player_Blank_Slot, inventory[i]);
			//Player_set_item_in_slot(null_item, inventory[i]);
		
	}
}
void Player_CollisionCheck(){
  if(Player_data->posX < Collision_Entity_Data->posX + Collision_Entity_Data->Entity_Size.width
		  && Player_data->posX + Player_data->Entity_Size.width > Collision_Entity_Data->posX
		  && Player_data->posY < Collision_Entity_Data->posY + Collision_Entity_Data->Entity_Size.height
		  && Player_data->posY + Player_data->Entity_Size.height > Collision_Entity_Data->posY){
	  SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Project", "Collision Occurred!", SDL_window);
	  //Client_Logger_Log(DEBUG,"Collision Occurred!");
  }
}
