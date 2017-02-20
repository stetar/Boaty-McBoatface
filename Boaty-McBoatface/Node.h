#pragma once
#include "GameObject.h"
enum NodeType
{
	CLEAR, GOAL
};

class Node
{
private:
	NodeType type = CLEAR;
	int gridX;
	int gridY;
	int posX;
	int posY;
	GameObject * containedObject;
	bool isContainingObejct = false;
	GLuint texture;
public:
	Node();
	void SetNodeType(NodeType newType);
	NodeType GetNodeType();
	int GetNodeGridX();
	void SetNodeGridX(int x);
	int GetNodeGridY();
	void SetNodeGridY(int y);
	int GetNodePosX();
	void SetNodePosX(int x);
	int GetNodePosy();
	void SetNodePosY(int y);
	GameObject* GetContainedObject();
	void SetContainedObject(GameObject * object);
	void DefineTextureToDraw(NodeType type);
	~Node();
};

