#include "Game.h"

Color Game::black_color(0, 0, 0, 255);
Color Game::white_color(255, 255, 255, 255);

Game::Game(const char* Title, Size ScreenSize, Color background_color, bool debug_mode = false)
{
	this->Title = Title;
	this->ScreenSize = ScreenSize;
	this->background_color = background_color;
	this->debug_mode = debug_mode;

	window = SDL_CreateWindow(Title,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		ScreenSize.width, ScreenSize.height,
		0);

	if (!window)
	{
		Log("Failed to create window\n", 3);
		std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
		return;
	}
	else if (window && debug_mode)
	{
		surface = SDL_GetWindowSurface( window );
		Log("Window successfully created");
		Log("Setting up renderer...");
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
		Log("Renderer successfully created");
	}
	
	SDL_version sdl_version;
	SDL_GetVersion(&sdl_version);

	std::cout << "\nGrass Engine v" << engine_version << " | SDL2 v" << (int)sdl_version.major << "." << (int)sdl_version.major << "." << (int)sdl_version.patch << "\n\n";
}

Game::~Game()
{
	SDL_DestroyRenderer(renderer);
	if (debug_mode)
		Log("Renderer destroyed");
	SDL_DestroyWindow(window);
	window = NULL;
	if (debug_mode)
		Log("Window destroyed");
	SDL_FreeSurface(surface);


	Log("Game successfully finished");
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
		SDL_SetRenderDrawColor(renderer, background_color.r, background_color.g, background_color.b, background_color.a);
		Draw();
		
		SDL_RenderPresent(renderer);
	}

}

