#include "box.h"


Box::Box(Vector2 position, Vector2 size, Color color = Color(0, 0, 0, 255))
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

	SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
	SDL_RenderFillRect(renderer, &box);
}

