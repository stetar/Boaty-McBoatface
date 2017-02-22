#include "GameWorld.h"
#include <GL\glut.h>
#include <SOIL.h>
#include <iostream>
#include "Wind.h"
#include <RandomFunctions.h>
GameWorld * world;
Wind * wind = new Wind();
void InitOpenGL()
{
	glShadeModel(GL_SMOOTH);
	glClearColor(0.0f, 0.0f, 0.0f, 0.5f);
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);

	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void Reshape(int width, int height)
{
	if (height == 0) { height = 1; }
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, width / height, 0.0f, 100.0f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void Keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27://ESC
		exit(0);
		break;
	case 119: //W
		for each (GameObject* var in *world->gOV)
		{
			var->Move('w');
		}
		break;

	case 97://A
		for each (GameObject* var in *world->gOV)
		{
			var->Move('a');
		}
		break;

	case 100://D
		for each (GameObject* var in *world->gOV)
		{
			var->Move('d');
		}
		break;

	case 115://S
		for each (GameObject* var in *world->gOV)
		{
			var->Move('s');
		}
		break;
	default:
		break;
	}
}

void GameLoop()
{
	world->Render();
}

int main(int argc, char** argv)
{
	std::cout << "Welcome to the Boaty-McBoatface game. \nBelow you will be able to read instructions" << std::endl;
	std::cout << "You are suppose to help guiding Boaty through it journey over the sea." << std::endl;
	std::cout << "You will be able to control Boaty by using to following keys: W,A,S,D." << std::endl;
	std::cout << "W will stear you upwards. A is left, D: Right, S: Downwards, \nbut beware because the sea is full of opstacels trying to stop you." << std::endl;

	std::cout << "The wind from east strength is: " << *(wind)->eptr << std::endl;
	std::cout << "The wind from west strength is: " << *(wind)->wptr << std::endl;
	std::cout << "The wind from north strength is: " << *(wind)->nptr << std::endl;
	std::cout << "The wind from south strength is: " << *(wind)->sptr << std::endl;
	RandomFunctions rd;
	std::cout << rd.randomNumber(1, 200);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);

	glutCreateWindow("My Game");

	InitOpenGL();
	glutReshapeFunc(&Reshape);
	glutDisplayFunc(&GameLoop);
	glutKeyboardFunc(&Keyboard);

	world = new GameWorld();
	glutMainLoop();

	return 0;
}