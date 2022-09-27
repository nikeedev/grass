#include <iostream>
#include "MyGame.h"

//Box box(Vector2(128, 128), Size(64, 64), Color(124, 34, 11, 255));

Sprite circle("../assets/textures/Black_Circle.png", Vector2(128, 128));

Sprite circle2("../assets/textures/Black_Circle.png", Vector2(428, 428));


int speed = 50;

/**
	The code will be ran once, before running the update and draw loop
*/
void MyGame::Once()
{
	circle.init(renderer);
	circle2.init(renderer);
}

/**
	Don't have rendering code inside of it, cause it won't clear and draw as intended
*/
void MyGame::Update(double ts)
{
	/*
	box.size.width += speed * ts;
	box.size.height += speed * ts;

	box.position.x += speed * ts;
	box.position.y += speed * ts;
	*/
	if (Input::KeyDown(SDL_SCANCODE_SPACE))
	{
		circle.position += Vector2(50*ts, 50*ts);
	}

}


/**
* Draws everything by clearing the screen, then draws the background color and the code inside this method.
*/
void MyGame::Draw()
{
	//box.Draw(renderer);
	circle.draw(renderer);
	circle2.draw(renderer);
}
