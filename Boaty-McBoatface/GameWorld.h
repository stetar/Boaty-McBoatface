#pragma once
#include "GameObject.h"
#include <vector>
#include "Boat.h"
class GameWorld
{
	std::vector<GameObject*>*gOV;
	int screenWidth, screenHeight;
public:
	int* screenWidthPtr = &screenWidth;
	int* screenHeightPtr = &screenHeight;
	GameWorld();
	void Render();
	~GameWorld();
};

