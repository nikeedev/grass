#pragma once

#include "../stuff/vec2.h"
#include "../stuff/color.h"
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

class Sprite {

public:

    const char* path;
    vec2 position;

private:

 

    SDL_Rect texture_rect = SDL_Rect();

    SDL_Texture* texture = nullptr; 

    SDL_Surface* img_surface = nullptr;

public:

    Sprite(const char* path, vec2 position);
    
    ~Sprite();

    void init(SDL_Renderer* renderer);

    void draw(SDL_Renderer* renderer);
    
    Sprite(const Sprite&) = delete;
};

