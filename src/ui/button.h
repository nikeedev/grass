#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "../stuff/vec2.h"
#include "../stuff/color.h"
#include "textbox.h"

class Button
{

private:
    Textbox textbox;
        
public:

    vec2 size, pos;
 

    Button();
    Button(const char* text, vec2 size, vec2 pos);

    ~Button();

    Button(const Button&) = delete;

    void draw(SDL_Renderer* renderer);

};


