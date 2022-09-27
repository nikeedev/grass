#pragma once
#include "SDL2/SDL.h"
#include <iostream>


class Input 
{
public: 

	static const Uint8 *keyboard_state;

	static bool Input::KeyDown(SDL_Scancode key);

}


