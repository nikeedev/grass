#include <iostream>
#include "MyGame.h"

// Box box(Vector2(0, 0), Vector2(20, 20), Color(124, 34, 11));

Sprite circle("../../assets/textures/Black_Circle.png", Vector2(128, 128));

Sprite circle2("../../assets/textures/Black_Circle.png", Vector2(428, 428));


int speed = 2;

/**
	The code will be ran once, before running the update and draw loop
*/
void MyGame::Once()
{
	circle.init(renderer);
	circle2.init(renderer);
    // box.Draw(renderer);
}

/**
	Don't have rendering code inside of it, cause it won't clear and draw as intended
*/
void MyGame::Update(double dt)
{  
	/*
	box.size.width += speed * dt;
	box.size.height += speed * dt;

	box.position.x += speed * dt;
	box.position.y += speed * dt;
	*/
    std::cout << dt << "\n";
    
    if (this->KeyPressed(SDL_SCANCODE_UP))
  	circle.position.y -= speed * dt;

    if (this->KeyPressed(SDL_SCANCODE_DOWN))
        circle.position.y += speed * dt;

    if (this->KeyPressed(SDL_SCANCODE_RIGHT))
        circle.position.x += speed * dt;

    if (this->KeyPressed(SDL_SCANCODE_LEFT))
        circle.position.x -= speed * dt;


    if (this->KeyPressed(SDL_SCANCODE_W))
		circle2.position.y -= speed * dt;

    if (this->KeyPressed(SDL_SCANCODE_S))
        circle2.position.y += speed * dt;

    if (this->KeyPressed(SDL_SCANCODE_D))
        circle2.position.x += speed * dt;

    if (this->KeyPressed(SDL_SCANCODE_A))
        circle2.position.x -= speed * dt;

    //std::cout << this->KeyPressed(SDL_SCANCODE_UP) << std::endl;

    //std::cout << background_color.r << ", " << background_color.g << ", " << background_color.b << "\n";
}


/**
* Draws everything by clearing the screen, then draws the background color and the code inside this method.
*/

void MyGame::Draw()
{
	
    circle.draw(renderer);
    circle2.draw(renderer);
    // box.Draw(renderer);
}
