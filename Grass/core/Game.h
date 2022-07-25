#pragma once

#include "../math/Size.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <memory>
#undef main



class Game
{
protected:
	Size* ScreenSize;
	const char* Title;
	

	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event     event;

	bool isRunning;

public:

	Game(const char* Title, Size* ScreenSize);
	~Game();

	void Loop();


protected:

	virtual void Once() = 0;
	virtual void Update(double delta_time) = 0;
	virtual void Draw() = 0;
	

};



