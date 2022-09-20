#pragma once

#include "../math/Vector2.h"
#include "../math/Size.h"
#include "../utils/Color.h"
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

class Sprite {

public:
    char* path;
    Vector2 position;
    Size size;

private:

 

    SDL_Rect texture;

    SDL_Texture* img = NULL; 

public:

    Sprite(char* path, Vector2 position);
    
    ~Sprite();

    void Draw(SDL_Renderer* renderer);
    
    void init(SDL_Renderer* renderer);

};

