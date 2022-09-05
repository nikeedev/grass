#include <iostream>
#include "MyGame.h"


// Entity* box = new Entity(new Vector2(this.ScreenSize.width / 2 - 32, this.ScreenSize.height / 2 - 32), new Size(64, 64));

Entity* box = new Entity(new Vector2(128, 128), new Size(64, 64), new Color(124, 34, 11, 255));


/**
	The code will be runned once, before running the update and draw loop
*/
void MyGame::Once()
{

}

/**
	Don't have rendering code inside of it, cause it won't clear and draw as intended
*/
void MyGame::Update(double ts)
{
	box->size->width += 0.5;
	box->size->height += 0.5;

	box->position->x += 0.3;
	box->position->y += 0.3;

}


/**
* Draws everything by clearing the screen, then draws the background color and the code inside this method.
*/
void MyGame::Draw()
{
	box->Draw(renderer);
}
