#pragma once
#include <SDL2/SDL.h>

class Color
{
public:
	uint8_t r, g, b, a;

public:
    Color() : r(0), g(0), b(0), a(255)
    {}


    Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a = 255) : r(r), g(g), b(b), a(a)
    {}  
	

    /**
    * @param Int64 Hex value (RGBA)
    */
    Color(uint64_t hexValue) : r((int)(hexValue >> 32) & 0xFF), g((int)(hexValue >> 16) & 0xFF), b((int)(hexValue >> 8) & 0xFF), a((int)hexValue & 0xFF)
    {}


};

