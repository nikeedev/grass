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
    Textbox(const char* text, vec2 pos, vec2 size, const Color& color = Color(0, 0, 0));

    ~Textbox();

    Textbox(const Textbox&) = delete;

    void draw(SDL_Renderer* renderer);
    
};


