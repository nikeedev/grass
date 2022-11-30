#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "../stuff/vec2.h"
#include "../stuff/color.h"


class Textbox 
{

public:
    char* text;

    vec2 size, pos;
    Color color;

    Textbox();
    Textbox(const char* const text, vec2 pos, vec2 size, Color& color);

    ~Textbox();

    Textbox(const Textbox&) = delete;

    void draw(SDL_Renderer* renderer);
    
};


