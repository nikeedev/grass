#pragma once

#include "../math/Size.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <memory>
#include "../math/Size.h"
#include "../utils/Color.h"
#undef main



class Game
{
protected:
	Size* ScreenSize;
	const char* Title;
	
	Color* background_color;

	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event     event;

	bool isRunning;

	// Colors:

	Color* black_color = new Color(0, 0, 0, 255);
	Color* white_color = new Color(255, 255, 255, 255);

public:

	Game(const char* Title, Size* ScreenSize, Color* background_color);
	~Game();

	void Loop();


protected:

	
	virtual void Once() = 0;
	virtual void Update(double ts) = 0;
	virtual void Draw() = 0;
	

};



