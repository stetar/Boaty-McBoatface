#pragma once
#include "Node.h"
class Grid
{
private:
	Node ** gridArray;
	int width;
	int height;
public:
	Grid(int height, int width);
	Node * AccesNode(int x, int y);
	void SetStartingPosition(int x, int y);
	void SetGoal(int x, int y);
	~Grid();
};

