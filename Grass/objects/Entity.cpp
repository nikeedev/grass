#include "Entity.h"


Entity::Entity(Vector2* position, Size* size, Size* screenSize)
{
	this->position = position;
	this->size = size;
	this->screenSize = screenSize;
}


Size* Entity::getSize()
{
	return size;
}

Entity::~Entity()
{}

