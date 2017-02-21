#pragma once
#include <GL\glut.h>
#include <SOIL.h>
class GameObject
{

public:
	GameObject();
	virtual void Render();
	virtual void Move(char input);
	~GameObject();
};

