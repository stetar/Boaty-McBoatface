#include "Grid.h"
#include "Boat.h"


Grid::Grid(int width = 7, int height = 7)
{
	this->height = height;
	this->width = width;
	gridArray = new Node*[width];
	for (int i = 0; i < width; i++)
	{
		gridArray[i] = new Node[height];
	}
}

Node * Grid::AccesNode(int x, int y)
{
	if (x <= width && y <= height && x > 0 && y > 0)
	{
		return &gridArray[x][y];
	}
	return nullptr;
}

void Grid::SetStartingPosition(int x, int y)
{
	if (x <= width && y <= height && x > 0 && y > 0)
	{
		&gridArray[x][y].SetContainedObject(Boat * boat);
	}
}

void Grid::SetGoal(int x, int y)
{
	if (x <= width && y <= height && x > 0 && y > 0)
	{
		&gridArray[x][y].SetNodeType = NodeType::GOAL;
	}
}


Grid::~Grid()
{
	for (int i = 0; i < width; i++)
	{
		delete[] gridArray[i];
	}
	delete[] gridArray;
}
