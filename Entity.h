#pragma once
typedef struct {
	int w;
	int h;
	int x;
	int y;
}rect;

int Entity_X_Velocity;
int Entity_Y_Velocity;
float Entity_Position_X;
float Entity_Position_Y;
const char* name;
rect Entity_Rectangle;
typedef void (Draw_func)();
typedef void (Redraw_func)();
typedef void (OnError_func)();
typedef void (OnCullsion_func)(rect*);
/*All EntityTypes aren't implemented yet.Some wont be implemented at all.*/
enum EntityType {
	RENDERABLE,
	PLAYER,
	SOUND,
	CAMERA,
	GUI,
	MAINMENU,

};
typedef struct {
	const char* name;
	rect Entity_Sprite;
	float posX;
	float posY;
	int Entity_X_Speed;
	int Entity_Y_Speed;

}EntityData;
void Draw(Draw_func* draw);
void Redraw(Redraw_func* redraw);
void OnError(OnError_func* onerror);
void OnCullsion(OnCullsion_func* oncullsion);
void SetSize(int w, int h,rect rectangle);
//void SetSize(int w, int h);
void SetWidth(int w);
void SetHeight(int h);
int GetSize();
/*For Server*/
void SendEntity(EntityData* entity);
void SendCullsionData();

