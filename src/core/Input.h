#pragma once
#include "SDL.h"

class Input
{
public:
	const uint8_t* keyboard;
	

	static bool KeyDown(const char* key);

};

