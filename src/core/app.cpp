#include "app.h"

Color Application::black_color(0, 0, 0, 255);
Color Application::white_color(255, 255, 255, 255);

Application::Application(const char* Title, vec2 ScreenSize, Scene* scenes, bool debug_mode) : Title(Title), ScreenSize(ScreenSize)
{

    SDL_version sdl_version;
    SDL_GetVersion(&sdl_version);

    std::cout << "\nGrass Engine v" << grass_version << ": " << grass_code_name << " | SDL v" << SDL_MAJOR_VERSION << "." << SDL_MINOR_VERSION << "." << SDL_PATCHLEVEL << "\n\n";


    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        fprintf(stderr, "Error SDL_Init : %s.\n", SDL_GetError());
    }

    if (TTF_Init() < 0) {
        fprintf(stderr, "Error TTF_Init : %s.\n", TTF_GetError());
    }

    window = SDL_CreateWindow(this->Title,
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        ScreenSize.x, ScreenSize.y,
        0);

    if (!window)
    {
        std::cout << "Grass Error:  Failed to create window\n" << std::endl;
        std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
        return;
    }

    std::cout << "Window successfully created" << std::endl;
    std::cout << "Setting up renderer..." << std::endl;


    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (!renderer)
    {
        std::cout << "Grass Error: Failed to get window's surface\n" << std::endl;
        std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
        return;
    }

    std::cout << "Renderer successfully created" << std::endl;

}


Application::Application(const char* Title, vec2 ScreenSize, Color background_color, bool debug_mode = false) : Title(Title), ScreenSize(ScreenSize), background_color(background_color), debug_mode(debug_mode)
{
    
    SDL_version sdl_version;
    SDL_GetVersion(&sdl_version);

    std::cout << "\nGrass Engine v" << grass_version << ": " << grass_code_name << " | SDL v" << SDL_MAJOR_VERSION << "." << SDL_MINOR_VERSION << "." << SDL_PATCHLEVEL << "\n\n";


	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		fprintf(stderr, "Error SDL_Init : %s.\n", SDL_GetError());
	}

    if (TTF_Init() < 0) {
	    fprintf(stderr, "Error TTF_Init : %s.\n", TTF_GetError());
    }

	window = SDL_CreateWindow(this->Title,
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		ScreenSize.x, ScreenSize.y,
		0);

	if (!window)
	{
		std::cout << "Grass Error: Failed to create window\n" << std::endl;
		std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
		return;
	}

	std::cout << "Window successfully created" << std::endl;
	std::cout << "Setting up renderer..." << std::endl;
	

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!renderer)
	{
		std::cout << "Grass Error: Failed to get window's surface\n" << std::endl;
		std::cout << "SDL2 Error: " << SDL_GetError() << "\n";
		return;
	}

	std::cout << "Renderer successfully created" << std::endl;
    
}


Application::~Application()
{
	SDL_DestroyRenderer(renderer);
    std::cout << "Renderer destroyed" << std::endl;
	SDL_DestroyWindow(window);
	window = NULL;
	std::cout << "Window destroyed" << std::endl;


	std::cout << "Application successfully finished" << std::endl;
}

void Application::Run()
{
   
    double fps = 0.0f;
    double prev_ticks = SDL_GetTicks();
    double ticks_now;
    double deltaTime;

    /*for (Scene scene : scenes) {
	    scene.Once();

    }*/

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

