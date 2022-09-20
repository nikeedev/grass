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

private:

 

    SDL_Rect texture_rect;

    SDL_Texture* texture = NULL; 

    SDL_Surface* img_surface = NULL;

public:

    Sprite(char* path, Vector2 position);
    
    ~Sprite();

    void init(SDL_Renderer* renderer);

    void draw(SDL_Renderer* renderer);
    

};

