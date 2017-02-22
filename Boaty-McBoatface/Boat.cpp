#include "Boat.h"

Wind *wStr = new Wind();

Boat::Boat(float initX, float initY, float initZ, Grid * theGrid)
{
	x = initX;
	y = initY;
	z = initZ;
	texture = SOIL_load_OGL_texture(".\\Boat.png", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
	this->theGrid = theGrid;
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

void Boat::Move(char input)
{
	switch (input)
	{
	case 'w':
		if (y < theGrid->AccesNode(0,6)->GetNodePosY())
		{
			y += *(wStr)->nptr;
		}
		break;

	case 's':
		if (y > theGrid->AccesNode(0,0)->GetNodePosY())
		{
			y -= *(wStr)->sptr;
		}
		break;

	case 'd':
		if (x < theGrid->AccesNode(6,0)->GetNodePosX())
		{
			x += *(wStr)->eptr;
		}
		break;

	case 'a':
		if (x > theGrid->AccesNode(0,0)->GetNodePosX())
		{
			x -= *(wStr)->wptr;
		}
		break;
	default:
		break;
	}
}

