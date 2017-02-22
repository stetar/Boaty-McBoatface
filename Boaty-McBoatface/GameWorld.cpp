#include "GameWorld.h"

Grid * grid;

GameWorld::GameWorld()
{
	grid = new Grid();
	gOV = new std::vector < GameObject*>();
	gOV->push_back(new Boat(grid->AccesNode(0, 6)->GetNodePosX(), grid->AccesNode(0, 6)->GetNodePosY(), 0, grid));
	grid->SetStartingPosition(0, 0, gOV->at(0));
	glEnable(GL_TEXTURE_2D);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR); 
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR); 
}

void GameWorld::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0.0f, 0.0f, -12.0f);

	grid->Render();

	for each (GameObject* var in *gOV)
	{
		var->Render();
	}
	glutSwapBuffers();
	glutPostRedisplay();
}

GameWorld::~GameWorld()
{
}

int test()
{
	return 0;
}
