#pragma once

#include "../math/Size.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <memory>
#include "../math/Size.h"
#include "../utils/Color.h"
#include "Input.h"
#include "../utils/Log.h"

#undef main



class Game
{
protected:
	Size* ScreenSize;
	const char* Title;
	
	Color background_color;

	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event     event;

	bool debug_mode;

	bool isRunning;

	// Colors:

	static Color black_color;
	static Color white_color;
public:



	Game(const char* Title, Size ScreenSize, Color background_color, bool debug_mode);
	~Game();

	void Loop();


protected:

	
	virtual void Once() = 0;
	virtual void Update(double ts) = 0;
	virtual void Draw() = 0;
	

};



