#pragma once
#include <GL\glut.h>
#include <SOIL.h>
class GameObject
{

public:
	GameObject();
	virtual void Render();
	~GameObject();
};

