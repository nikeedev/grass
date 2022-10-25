#pragma once

#include "../stuff/vec2.h"
#include "../stuff/color.h"
#include "SDL2/SDL.h"

class Box {

public:
    vec2 position;
    vec2 size;
    Color color;

protected:

    SDL_Rect box;

public:

    Box(vec2 position, vec2 size, Color color);
    
    ~Box();

    void Draw(SDL_Renderer* renderer);
    
};

