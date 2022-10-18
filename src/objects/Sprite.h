#pragma once

#include "../math/Vector2.h"
#include "../math/Vector2.h"
#include "../utils/Color.h"
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

class Sprite {

public:

    const char* path;
    Vector2 position;

private:

 

    SDL_Rect texture_rect = SDL_Rect();

    SDL_Texture* texture = nullptr; 

    SDL_Surface* img_surface = nullptr;

public:

    Sprite(const char* path, Vector2 position);
    
    ~Sprite();

    void init(SDL_Renderer* renderer);

    void draw(SDL_Renderer* renderer);
    
    Sprite(const Sprite&) = delete;
};

