#pragma once
#include "Grass.hpp"

class MyScene : public Scene
{
public:

    using Scene::Scene;

    void Once(SDL_Renderer* renderer) override;
    void Update(SDL_Renderer* renderer, double ts) override;
    void Draw(SDL_Renderer* renderer) override;
};


