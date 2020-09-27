#include "LevelLoader.h"

void WriteLevelToFile(const char* path, LevelData* leveldata,Tile* leveltiles)
{
	Level_File = fopen(path, "w");
	leveldata->magic = "LEVELDATA";
	fputs(leveldata->magic,Level_File);

	for (int i = 0; i < 1024; i++) {
		for (int i2 = 0; i2 < 600; i2++) {
		//	memset(leveldata->padding[i2], 0xFF, sizeof(leveldata->padding));
			//memset(leveldata->level_data, 255, sizeof(leveldata->level_data));
			fputc(leveldata->level_data[i], Level_File);
			//fputc(leveldata->padding, Level_File);
			
		}
	}
	
	fclose(Level_File);
}

void ReadLevelFromFile(const char* path, LevelData* leveldata)
{
	Level_File = fopen(path, "r");

}
