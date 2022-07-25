#pragma once

#include "../math/Size.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <memory>



class Game
{
private:
	Size* ScreenSize;
	const char* Title;
	

	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event     event;

public:
	Game(const char* Title, Size* ScreenSize);
	~Game();

	void Once();
	void Update(double delta_time);
	void OnUpdate();
	void Draw();
	void OnDraw();
		

	bool isRunning;

private:
	void Loop();

};



