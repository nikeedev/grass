#include "Input.h"


void Input::Update()
{
	keyboard_state = SDL_GetKeyboardState(NULL);
}


bool Input::KeyDown(SDL_Scancode key)
{	
	return keyboard_state[key];
}


