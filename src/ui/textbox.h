#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "../stuff/vec2.h"
#include "../stuff/color.h"


class Textbox 
{

public:
    const char* text;

    vec2 size, pos;
    Color color;

    Textbox();
    Textbox(const char* text, vec2 size, vec2 pos, Color& color); 

    ~Textbox();

    Textbox(const Textbox&) = delete;

    void draw(SDL_Renderer* renderer);
    
};


