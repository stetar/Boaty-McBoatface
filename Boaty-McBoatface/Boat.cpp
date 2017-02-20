#include "Boat.h"



Boat::Boat(float initX, float initY, float initZ)
{
	x = initX;
	y = initY;
	z = initZ;
	texture = SOIL_load_OGL_texture("", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
	glBindTexture(GL_TEXTURE_2D, texture);
}


Boat::~Boat()
{
}
