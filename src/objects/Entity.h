#pragma once

#include "../math/Vector2.h"
#include "../math/Size.h"
#include "../utils/Color.h"
#include "SDL2/SDL.h"

class Entity {

public:
    Vector2 position;
    Size size;
    Color color;

protected:

    SDL_Rect box;

public:
    Entity(Vector2 position, Size size, Color color);
    
    ~Entity();

    void Draw(SDL_Renderer* renderer);
    
};

