#include "Node.h"



Node::Node()
{
}

void Node::SetNodeType(NodeType newType)
{
	this->type = newType;
}

NodeType Node::GetNodeType()
{
	return this->type;
}

int Node::GetNodeX()
{
	return this->nodeX;
}

void Node::SetNodeX(int x)
{
	this->nodeX = x;
}

int Node::GetNodeY()
{
	return this->nodeY;
}

void Node::SetNodeY(int y)
{
	this->nodeY = y;
}

GameObject * Node::GetContainedObject()
{
	if (isContainingObejct)
	{
		this->containedObject;
	}
	else
	{
		return nullptr;
	}
}

void Node::SetContainedObject()
{

}


Node::~Node()
{
}
