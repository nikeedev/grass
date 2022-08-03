#include "Game.h"


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
		std::cout << "Failed to create window\n";
		std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
		return;
	}

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!renderer)
	{
		std::cout << "Failed to get window's surface\n";
		std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
		return;
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

