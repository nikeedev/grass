#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "stuff/Vec2.h"
#include "stuff/Color.h"


class Textbox
{

public:
    const char* text;

    Vec2 size, pos;
    Color color;

    Textbox();
    Textbox(const char* text, Vec2 pos, Vec2 size, Color color);

    ~Textbox();

    Textbox(const Textbox&) = delete;

    void draw(SDL_Renderer* renderer);
    
};


