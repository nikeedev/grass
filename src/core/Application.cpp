#include "Application.h"

Color Application::black_color(0, 0, 0, 255);
Color Application::white_color(255, 255, 255, 255);

Application::Application(const char* Title, Vector2 ScreenSize, Color background_color, bool debug_mode = false)
{
	this->Title = Title;
	this->ScreenSize = ScreenSize;
	this->background_color = background_color;
	this->debug_mode = debug_mode;

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		fprintf(stderr, "Error SDL_Init : %s.\n", SDL_GetError());
	}

	window = SDL_CreateWindow(this->Title,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		ScreenSize.x, ScreenSize.y,
		0);

	if (!window)
	{
		Log("Failed to create window\n", 3);
		std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
		return;
	}

	Log("Window successfully created");
	Log("Setting up renderer...");
	

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!renderer)
	{
		Log("Failed to get window's surface\n");
		std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
		return;
	}

	Log("Renderer successfully created");
    
}

Application::~Application()
{
	SDL_DestroyRenderer(renderer);
	Log("Renderer destroyed");
	SDL_DestroyWindow(window);
	window = NULL;
	Log("Window destroyed");


	Log("Application successfully finished");
}

void Application::Loop()
{
   
    double fps = 0.0f;
    double prev_ticks = SDL_GetTicks();
    double ticks_now;
    double deltaTime;

	Once();

    keyboard_state = SDL_GetKeyboardState(NULL);

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
				switch (event.key.keysym.sym)
				{
					case SDLK_ESCAPE:
						isRunning = false;
						break;
				}
			default:
				break;
			
			}

			
		}

        ticks_now = SDL_GetTicks();
        deltaTime = ticks_now - prev_ticks;
        fps = (1000 / deltaTime);
       
	    prev_ticks = SDL_GetTicks();

		Update(deltaTime/1000);

		SDL_RenderClear(renderer);
		Draw();
        SDL_SetRenderDrawColor(renderer, background_color.r, background_color.g, background_color.b, background_color.a);

		SDL_RenderPresent(renderer);
	}

}



bool Application::KeyPressed(SDL_Scancode key)
{
    //std::cout << keyboard_state[key] << "\n";
    return keyboard_state[key];
}

