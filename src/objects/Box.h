#pragma once

#include "../math/Vector2.h"
#include "../math/Vector2.h"
#include "../utils/Color.h"
#include "SDL2/SDL.h"

class Box {

public:
    Vector2 position;
    Vector2 size;
    Color color;

protected:

    SDL_Rect box;

public:

    Box(Vector2 position, Vector2 size, Color color);
    
    ~Box();

    void Draw(SDL_Renderer* renderer);
    
};

