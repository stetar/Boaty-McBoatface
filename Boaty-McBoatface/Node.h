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
	int nodeX;
	int nodeY;
	GameObject * containedObject;
	bool isContainingObejct = false;
public:
	Node();
	void SetNodeType(NodeType newType);
	NodeType GetNodeType();
	int GetNodeX();
	void SetNodeX(int x);
	int GetNodeY();
	void SetNodeY(int y);
	GameObject* GetContainedObject();
	void SetContainedObject();
	~Node();
};

