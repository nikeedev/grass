#include "Sprite.h"


Sprite::Sprite(char* path, Vector2 position)
{
	this->path = path;
	this->position = position;

}

void Sprite::init(SDL_Renderer* renderer)
{
	img = IMG_LoadTexture(renderer, path);
	SDL_QueryTexture(img, NULL, NULL, (int*)&size.width, (int*)&size.height);

	texture.x = position.x; 
	texture.y = position.y;
	texture.w = size.width * 2;
	texture.h = size.height * 2; 

}

Sprite::~Sprite()
{}



void Sprite::Draw(SDL_Renderer* renderer)
{
	texture.x = position.x;
	texture.y = position.y;
	texture.w = size.width;
	texture.h = size.height;

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

	SDL_RenderCopy(renderer, img, &texture, NULL);
}

