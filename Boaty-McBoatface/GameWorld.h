#pragma once
#include "GameObject.h"
#include <vector>
class GameWorld
{
	std::vector<GameObject*>*gOV;

public:

	GameWorld();
	void Render();
	~GameWorld();
};

