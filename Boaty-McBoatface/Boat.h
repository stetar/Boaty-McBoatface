#pragma once
#include "GameObject.h"

class Boat :
	public GameObject
{
	GLuint texture;
	float x;
	float y;
	float z;
	char input;
	
public:
	Boat(float initX, float initY, float initZ);
	~Boat();
	void Render();
	void Move(char input);
};

