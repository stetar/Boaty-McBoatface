#pragma once
#include "GameObject.h"

class Boat :
	public GameObject
{
	GLuint texture;
	float x;
	float y;
	float z;
	
public:
	Boat(float initX, float initY, float initZ);
	~Boat();
};

