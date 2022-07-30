#include "Entity.h"


Entity::Entity(Vector2* position, Size* size)
{
	this->position = position;
	this->size = size;

	box.x = this->position->x;
	box.y = this->position->y;
	box.w = this->size->width;
	box.h = this->size->height;

}



Entity::~Entity()
{
	delete &box;
}



void Entity::Draw(SDL_Renderer* renderer)
{
	box.x = position->x;
	box.y = position->y;
	box.w = size->width;
	box.h = size->height;

	SDL_RenderFillRect(renderer, &box);
}

