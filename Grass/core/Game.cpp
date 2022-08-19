#include "Game.h"

bool Game::debug_mode = false;

Game::Game(const char* Title, Size* ScreenSize, Color* background_color)
{
	this->Title = Title;
	this->ScreenSize = ScreenSize;
	this->background_color = background_color;

	window = SDL_CreateWindow(Title,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		ScreenSize->width, ScreenSize->height,
		0);

	if (!window)
	{
		Log("Failed to create window\n", 3);
		std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
		return;
	}
	else if (window && debug_mode)
	{
		Log("Window succesfully created\n");
		Log("Setting up renderer...\n");
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!renderer)
	{
		Log("Failed to get window's surface\n");
		std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
		return;
	}
	else if (renderer && debug_mode)
	{
		Log("Renderer succesfully created\n");
	}

}

Game::~Game()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}

void Game::Loop()
{
	isRunning = true;

	std:
	Once();

	while (isRunning)
	{
		while (SDL_PollEvent(&event) > 0)
		{
			switch (event.type)
			{
			case SDL_QUIT:
				isRunning = false;
				break;

			case SDL_KEYDOWN:
				switch (event.key.keysym.sym) {

				case SDLK_UP:
					Input::keyBools[1] = true;
					break;
				case SDLK_DOWN:
					Input::keyBools[2] = true;
					break;

				case SDLK_LEFT:
					Input::keyBools[3] = true;
					break;
				case SDLK_RIGHT:
					Input::keyBools[4] = true;
					break;

				case SDLK_SPACE:
					Input::keyBools[4] = true;
					break;
				

				case SDLK_ESCAPE:
					isRunning = false;

				default:
					break;
				}
				break;

			case SDL_KEYUP:
				switch (event.key.keysym.sym) {
				case SDLK_UP:
					Input::keyBools[1] = false;
					break;
				case SDLK_DOWN:
					Input::keyBools[2] = false;
					break;

				case SDLK_LEFT:
					Input::keyBools[3] = false;
					break;
				case SDLK_RIGHT:
					Input::keyBools[4] = false;
					break;

				case SDLK_SPACE:
					Input::keyBools[4] = false;
					break;

				default:
					break;
				}
			default:
				break;
			}
		}

		Update(1.0 / 60.0);

		
		
		SDL_RenderClear(renderer);


		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

		Draw();

		SDL_SetRenderDrawColor(renderer, background_color->r, background_color->g, background_color->b, background_color->a);

		SDL_RenderPresent(renderer);
	}

}

