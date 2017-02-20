#include "GameWorld.h"
#include <stdlib.h>
#include <GL\glut.h>



GameWorld::GameWorld()
{

}

void GameWorld::Render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glTranslatef(0.0f, 0.0f, -12.0f);

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
