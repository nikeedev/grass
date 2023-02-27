#pragma once

#include <iostream>
#include <memory>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include "Scene.h"
#include "../stuff/color.h"
#include "../stuff/log.hpp"
#include "../stuff/funcs.h"
#include "../stuff/vec2.h"



#undef main

#define grass_version "0.2.2a"
#define grass_code_name "Seedling"



class Application
{
protected:
	const char* Title;

	vec2 ScreenSize;

	Color background_color;

	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Event event;


	bool debug_mode;

	bool isRunning = true;

    // Scene scenes[] = {};

	// Colors:

	static Color black_color;
	static Color white_color;

public:



	Application(const char* Title, vec2 ScreenSize, Color background_color, bool debug_mode);
    Application(const char* Title, vec2 ScreenSize, Scene scenes[], size_t scene_num, bool debug_mode);

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



