#pragma once

#include "stuff/Vec2.h"
#include "stuff/Color.h"
#include "SDL2/SDL.h"

class Box {

public:
    Vec2 position;
    Vec2 size;
    Color color;

protected:

    SDL_Rect box;

public:

    Box() : position(Vec2()), size(Vec2()), color(Color()) {
        box = SDL_Rect();
    }

    Box(Vec2 position, Vec2 size, Color color);
    
    ~Box();

    void Draw(SDL_Renderer* renderer);
    
    Box(const Box&) = delete;
};

