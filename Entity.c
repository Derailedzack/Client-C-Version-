#include "Entity.h"

void Draw(Draw_func* draw)
{
	(draw)();
}

void Redraw(Redraw_func* redraw)
{
	(redraw)();
}

void OnError(OnError_func* onerror)
{
	(onerror)();
}

void OnCullsion(OnCullsion_func* oncullsion)
{
	(oncullsion)(&Entity_Rectangle);
}

void SetSize(int w, int h,rect rectangle)
{
	Entity_Rectangle = rectangle;
	Entity_Rectangle.w = w;
	Entity_Rectangle.h = h;
}



void SetWidth(int w)
{
	Entity_Rectangle.w = w;
}

void SetHeight(int h)
{
	Entity_Rectangle.h = h;
}

int* GetSize()
{
	int* Size = 2;
	if (Size[0] || Size[1] == 0){

	}else{
		Size[0] = Entity_Rectangle.w;
		Size[1] = Entity_Rectangle.h;
	}

	return (Size);
}

void CullsionTest(EntityData ent_data, EntityData ent_other_data)
{

}

void SendEntity(EntityData* entity)
{

}

void SendCullsionData()
{
}
