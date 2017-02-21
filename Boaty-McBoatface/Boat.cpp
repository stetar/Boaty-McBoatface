#include "Boat.h"

Boat::Boat(float initX, float initY, float initZ)
{
	x = initX;
	y = initY;
	z = initZ;
	texture = SOIL_load_OGL_texture(".\\Boat.png", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
}


Boat::~Boat()
{
}

void Boat::Render()
{
	glPushMatrix();
	glTranslatef(x, y, 0);

	glBindTexture(GL_TEXTURE_2D, texture);
	glBegin(GL_QUADS);

	glTexCoord2f(0.0f, 0.0f); glVertex3f(-1.0f, -1.0f, 1.0f);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(1.0f, -1.0f, 1.0f);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(1.0f, 1.0f, 1.0f);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(-1.0f, 1.0f, 1.0f);
	glEnd();

	glPopMatrix();
}

