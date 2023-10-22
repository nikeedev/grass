#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include "Scene.h"
#include "stuff/color.h"
#include "stuff/funcs.h"
#include "stuff/vec2.h"
#include "logging/Logging.hpp"


#undef main

#define grass_version "0.2.4a"
#define grass_code_name "dev"


class Application
{
protected:
	const char* Title;

	Vec2 ScreenSize;

	//Color background_color;

	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Event event;


	bool debug_mode;

	bool isRunning = true;

    std::vector<std::unique_ptr<Scene>> scenes;

    int current_scene = 0;


public:

	//Application(const char* Title, Vec2 ScreenSize, Color background_color, bool debug_mode);
    Application(const char* Title, Vec2 ScreenSize, std::vector<std::unique_ptr<Scene>> scenes, bool debug_mode);

    Application(const Application&) = delete;
	~Application();

	void Run();


protected:


    //virtual void Once() = 0;
    //virtual void Update(double ts) = 0;
    //virtual void Draw() = 0;

    const Uint8* keyboard_state = NULL;

    bool KeyPressed(SDL_Scancode key);
	

};



