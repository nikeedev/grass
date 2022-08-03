#pragma once
#include "SDL2/SDL.h"

class Color
{
public:
	Uint8 r, g, b, a;

public:
	Color();

	Color(Uint8 r, Uint8 g, Uint8 b, Uint8 a);

	Color(Uint8 r, Uint8 g, Uint8 b);

	~Color();
};

