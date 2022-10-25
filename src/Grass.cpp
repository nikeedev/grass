#include "grass.h"

SDL_version sdl_version;
SDL_GetVersion(&sdl_version);

std::cout << "\nGrass Engine v" << grass_version << ": " << grass_code_name << " | SDL2 v" << SDL_MAJOR_VERSION << "." << SDL_MINOR_VERSION << "." << SDL_PATCHLEVEL << "\n\n";
