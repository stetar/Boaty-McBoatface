#include "Node.h"



Node::Node(int posX, int posY)
{
	this->posX = posX;
	this->posY = posY;
	//*this->texture = SOIL_load_OGL_texture(".\\ClearWater.png", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
	//glBindTexture(GL_TEXTURE_2D, *this->texture);
}

void Node::SetNodeType(NodeType newType)
{
	this->type = newType;
	DefineTextureToDraw(newType);
}

NodeType Node::GetNodeType()
{
	return this->type;
}

int Node::GetNodeGridX()
{
	return this->gridX;
}

void Node::SetNodeGridX(int x)
{
	this->gridX = x;
}

int Node::GetNodeGridY()
{
	return this->gridY;
}

void Node::SetNodeGridY(int y)
{
	this->gridY = y;
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

void Node::SetContainedObject(GameObject * object)
{
	if (object != nullptr)
	{
		this->containedObject = object;
	}
}

void Node::DefineTextureToDraw(NodeType type)
{
	if (type == NodeType::CLEAR)
	{
		*texture = SOIL_load_OGL_texture(".\\ClearWater.jpg", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
	}
	else if (type == NodeType::GOAL)
	{
		*texture = SOIL_load_OGL_texture("", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
	}

	glBindTexture(GL_TEXTURE_2D, *this->texture);
}

void Node::Render()
{
	//if (texture == 0)
	//{
	//	return;
	//}
	glPushMatrix();
	glTranslatef(posX, posY, 0);

	//glBindTexture(GL_TEXTURE_2D, *this->texture);

	glBegin(GL_QUADS);

	glTexCoord2f(0.0f, 0.0f); glVertex3f(-1.0f, -1.0f, 1.0f);
	glTexCoord2f(1.0f, 0.0f); glVertex3f(1.0f, -1.0f, 1.0f);
	glTexCoord2f(1.0f, 1.0f); glVertex3f(1.0f, 1.0f, 1.0f);
	glTexCoord2f(0.0f, 1.0f); glVertex3f(-1.0f, 1.0f, 1.0f);
	glEnd();

	glPopMatrix();
}

void Node::SetIsContainingObject(bool containingObject)
{
	this->isContainingObejct = containingObject;
}

bool Node::GetIsContainingObject()
{
	return isContainingObejct;
}

Node::~Node()
{
}

int Node::GetNodePosX()
{
	return posX;
}

void Node::SetNodePosX(int x)
{
	posX = x;
}

int Node::GetNodePosY()
{
	return posY;
}

void Node::SetNodePosY(int y)
{
	posY = y;
}
