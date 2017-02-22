#ifndef BOAT_H
#define BOAT_H
#include "GameObject.h"
#include "Grid.h"
#include "Wind.h"

class Boat :
	public GameObject
{
	GLuint texture;
	float x;
	float y;
	float z;
	char input;
	Grid * theGrid;
public:
	Boat(float initX, float initY, float initZ, Grid * theGrid);
	~Boat();
	void Render();
	void Move(char input);
};
#endif // !1

