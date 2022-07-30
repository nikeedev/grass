#pragma once

#include "../math/Vector2.h"
#include "../math/Size.h"
#include "SDL2/SDL.h"

class Entity {

public:
    Vector2* position;
    Size* size;
protected:

    SDL_Rect box;

public:
    Entity(Vector2* position, Size* size);
    
    ~Entity();

    void Draw(SDL_Renderer* renderer);
    
};

