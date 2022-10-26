#pragma once

#include <SDL2/SDL.h>
#include "../stuff/vec2.h"
#include "../stuff/color.h"


class TextBox 
{

private:
    const char* text;

public:
    
    vec2 size, pos;
    Color color;

    TextBox(const& char* text, vec2 size, vec2 pos, Color* color(255, 255, 255, 255)); 

    ~TextBox();

    TextBox(const TextBox&) = delete;

    void draw(SDL_Renderer* renderer);
    
};


