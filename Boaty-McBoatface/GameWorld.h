#pragma once
#include "GameObject.h"
#include <vector>
#include "Boat.h"
class GameWorld
{
	std::vector<GameObject*>*gOV;

public:

	GameWorld();
	void Render();
	~GameWorld();
};

