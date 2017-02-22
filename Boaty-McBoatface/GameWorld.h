#pragma once
#include "GameObject.h"
#include <vector>
#include "Boat.h"
#include <stdlib.h>
#include <GL\glut.h>
#include "GameObject.h"
#include "Grid.h"
class GameWorld
{
	int screenWidth, screenHeight;
public:
	int* screenWidthPtr = &screenWidth;
	int* screenHeightPtr = &screenHeight;
	std::vector<GameObject*>*gOV;
	GameWorld();
	void Render();
	~GameWorld();
};