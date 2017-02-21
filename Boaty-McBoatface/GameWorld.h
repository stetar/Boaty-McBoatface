#pragma once
#include "GameObject.h"
#include <vector>
#include "Boat.h"
class GameWorld
{
	

public:
	std::vector<GameObject*>*gOV;
	GameWorld();
	void Render();
	~GameWorld();
};

