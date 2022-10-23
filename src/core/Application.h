#pragma once

#include "../math/Vector2.h"
#include <SDL2/SDL.h>
#include <iostream>
#include <memory>
#include "../math/Vector2.h"
#include "../utils/Color.h"
#include "../utils/Log.h"

#undef main



class Application
{
protected:
	const char* Title;

	Vector2 ScreenSize;

	Color background_color;

	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Event event;


	bool debug_mode;

	bool isRunning = true;

	// Colors:

	static Color black_color;
	static Color white_color;

public:



	Application(const char* Title, Vector2 ScreenSize, Color background_color, bool debug_mode);
    Application(const Application&) = delete;
	~Application();

	void Loop();


protected:

	
	virtual void Once() = 0;
	virtual void Update(double ts) = 0;
	virtual void Draw() = 0;


    const Uint8* keyboard_state = NULL;

    bool KeyPressed(SDL_Scancode key);
	

};



