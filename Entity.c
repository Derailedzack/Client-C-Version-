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
}

void SetHeight(int h)
{
}

int GetSize()
{
	return 0;
}

void SendEntity(EntityData* entity)
{
}

void SendCullsionData()
{
}
