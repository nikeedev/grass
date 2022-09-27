#pragma once
#include "SDL2/SDL.h"

class Input
{
public:

	static void Update();

	static const Uint8* keyboard_state;

	static bool KeyDown(SDL_Scancode key);

};

