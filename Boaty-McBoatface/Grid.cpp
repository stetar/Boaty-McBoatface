#include "Grid.h"
#include "Boat.h"

Grid::Grid(int width, int height)
{
	this->height = height;
	this->width = width;
	gridArray = new Node*[width];
	for (int i = 0; i < width; i++)
	{
		gridArray[i] = new Node[height];
	}
	AlignGrid();
}

Node * Grid::AccesNode(int x, int y)
{
	if (x <= width && y <= height && x >= 0 && y >= 0)
	{
		return &gridArray[x][y];
	}
	return nullptr;
}

void Grid::SetStartingPosition(int x, int y, GameObject * boat)
{
	if (x <= width && y <= height && x > 0 && y > 0)
	{
		gridArray[x][y].SetContainedObject(boat);
		gridArray[x][y].SetIsContainingObject(true);
	}
}

void Grid::SetGoal(int x, int y)
{
	if (x <= width && y <= height && x > 0 && y > 0)
	{
		gridArray[x][y].SetNodeType(NodeType::GOAL);
	}
}

void Grid::AlignGrid()
{
	int x = 0;
	int y = 0;
	for (int i = 0; i < width; i++)
	{
		for (int a = 0; a < height; a++)
		{
			gridArray[i][a].SetNodeGridX(x);
			gridArray[i][a].SetNodeGridY(y);
			gridArray[i][a].SetNodePosX(i-3);
			gridArray[i][a].SetNodePosY(a-3);
			y++;
		}
		x++;
		y = 0;
	}
}

void Grid::Render()
{
	for (int i = 0; i < width; i++)
	{
		for (int a = 0; a < height; a++)
		{
			gridArray[i][a].Render();
		}
	}
}

int Grid::GetGridHeight()
{
	return this->height;
}

int Grid::GetGridWidth()
{
	return this->width;
}

Grid::~Grid()
{
	for (int i = 0; i < width; i++)
	{
		delete[] gridArray[i];
	}
	delete[] gridArray;
}
