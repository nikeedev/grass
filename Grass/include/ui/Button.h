#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "stuff/Vec2.h"
#include "stuff/Color.h"
#include "./Textbox.h"

class Button
{

private:
    Textbox textbox;
        
public:

    Vec2 size, pos;
 

    Button();
   
    
    Button(const char* text, Vec2 pos, Vec2 size);
    

    ~Button();

    Button(const Button&) = delete;

    void draw(SDL_Renderer* renderer);

};


