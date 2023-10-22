#include "core/Scene.h"

bool Scene::KeyPressed(SDL_Scancode key)
{
    //std::cout << keyboard_state[key] << "\n";
    return keyboard_state[key];
}