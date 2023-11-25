#include "objects/Box.h"


Box::Box(Vec2 position, Vec2 size, Color color)
{
	this->position = position;
	this->size = size;
	this->color = color;

	box.x = this->position.x;
	box.y = this->position.y;
    box.w = this->size.x;
	box.h = this->size.y;

}


Box::~Box()
{}

void Box::Draw(SDL_Renderer* renderer)
{
	box.x = position.x;
	box.y = position.y;
	box.w = size.x;
	box.h = size.y;

	SDL_SetRenderDrawColor(renderer, (unsigned int)color.r, (unsigned int)color.g, (unsigned int)color.b, (unsigned int)color.a);
	SDL_RenderFillRect(renderer, &box);
}

