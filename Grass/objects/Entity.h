#pragma once

#include "../math/Vector2.h"
#include "../math/Size.h"


class Entity {

public:
    Vector2* position;
    Size* size;
protected:
    Size* screenSize;
    bool ClearScreen = true;

public:
    Entity(Vector2* position, Size* size, Size* screenSize);

    Size* getSize();
    /*
    draw(ctx: any, ClearScreen : boolean = true) {
        ClearScreen = typeof ClearScreen == 'boolean' ? ClearScreen : true;
        if (ClearScreen)
            ctx.clearRect(0, 0, this.screenSize.width, this.screenSize.height);
    }
    */
    ~Entity();
};

