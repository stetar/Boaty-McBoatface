#ifndef GRID_H
#define GRID_H
#include "Node.h"
class Grid
{
private:
	Node ** gridArray = nullptr;
	int width;
	int height;
public:
	Grid(int width = 7, int height = 7);
	Node * AccesNode(int x, int y);
	void SetStartingPosition(int x, int y, GameObject * boat);
	void SetGoal(int x, int y);
	void AlignGrid();
	void Render();
	int GetGridHeight();
	int GetGridWidth();
	~Grid();

};
#endif // !GRID_H