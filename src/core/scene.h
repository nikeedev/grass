#pragma once
#include "../stuff/color.h"
#include "../stuff/vec2.h"

class Scene
{
public:
    Scene(Color background_color);


    virtual void Once() = 0;
    virtual void Update(double ts) = 0;
    virtual void Draw() = 0;
};

