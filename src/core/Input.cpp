#include "Input.h"

const Uint8* Input::keyboard_state = SDL_GetKeyboardState(NULL);


void Input::Update()
{
	keyboard_state = SDL_GetKeyboardState(NULL);
}


bool Input::KeyDown(SDL_Scancode key)
{	
	std::cout << key << " key pressed\n";
	return keyboard_state[key];
}


