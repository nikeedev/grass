#pragma once

#include <string>
#include "stuff/Color.h"
#include "stuff/Vec2.h"

class Scene
{
public:
    Scene(const char* name, Color background_color) : name(name), background_color(background_color) {};


    virtual void Once(SDL_Renderer* renderer) = 0;
    virtual void Update(SDL_Renderer* renderer, double ts) = 0;
    virtual void Draw(SDL_Renderer* renderer) = 0;
    Color background_color;
private: 
    std::string name;

public:
    const Uint8* keyboard_state = NULL;

    bool KeyPressed(SDL_Scancode key);

};

