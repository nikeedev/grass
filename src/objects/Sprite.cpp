#include "sprite.h"


Sprite::Sprite(const char* path, vec2 position)
{

	this->path = path;
	this->position = position;

}

void Sprite::init(SDL_Renderer* renderer)
{

    SDL_Surface* surface = IMG_Load(path); 


    if (surface == NULL) {
        SDL_Log("Failed to load image: %s\n", IMG_GetError());
        exit(1);
    }


    texture = SDL_CreateTextureFromSurface(renderer, surface); 

    texture_rect.w = surface->w;
    texture_rect.h = surface->h;
    SDL_FreeSurface(surface);

}

Sprite::~Sprite()
{}



void Sprite::draw(SDL_Renderer* renderer)
{
	texture_rect.x = position.x;
	texture_rect.y = position.y;

	SDL_RenderCopy(renderer, texture, NULL, &texture_rect);

}

