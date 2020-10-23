/*
 * EntityCollisionTest.c
 *
 *  Created on: Aug 3, 2020
 *      Author: admin
 */

#include"EntityCollisionTest.h"
void Collsion_init(){
	Collision_Entity_Data = malloc(sizeof(EntityData));
	Collision_Entity_Data->Entity_ID = 1;
	Collision_Entity_Data->posX = 1.0f;
	Collision_Entity_Data->posY = -1.0f;
	Collision_Entity_Data->Entity_Size.height = 32;
	Collision_Entity_Data->Entity_Size.width = 32;
}
void Collision_draw(){
glBegin(GL_POLYGON);
glColor3f(0.0f,0.0f,1.0f);
glVertex3f(0.25f + Collision_Entity_Data->posX,0.25f + Collision_Entity_Data->posY,0.25f);
glVertex3f(-0.25 + Collision_Entity_Data->posX,0.25f + Collision_Entity_Data->posY,0.25f);
glVertex3f(-0.25f + Collision_Entity_Data->posX,-0.25f + Collision_Entity_Data->posY,-0.25f);
glSecondaryColor3f(9.0f,2.0f,1.0f);
glVertex3f(0.25f + Collision_Entity_Data->posX,-0.25f + Collision_Entity_Data->posY,0.25f);
glVertex3f(0.25f + Collision_Entity_Data->posX,0.25f + Collision_Entity_Data->posY,-0.25f);
//glVertex3f(0.5f,-0.5f,0.5f);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0f,1.0f,1.0f);
glVertex3f(2.0f,2.0f,2.0f);
glVertex3f(-2.0f,2.0f,2.0f);
glVertex3f(-2.0f,2.0f,-2.0f);
glVertex3f(-2.0f,0.0f,-2.0f);

glVertex3f(0.25f,0.25f,0.25f);
glVertex3f(-0.25f,0.0f,0.25f);
glVertex3f(-0.25f,0.25f,-0.25f);
glVertex3f(-0.25f,-0.25f,-0.25f);
glVertex3f(1.0f,1.0f,1.0f);
glEnd();
}
void Collision_redraw(){
	Collision_draw();
}
