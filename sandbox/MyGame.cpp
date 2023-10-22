#include <iostream>
#include "MyGame.h"

// Box box(Vec2(0, 0), Vec2(20, 20), Color(124, 34, 11));

//Sprite circle("../assets/textures/Black_Circle.png", Vec2(128, 128));

//Sprite circle2("../assets/textures/Black_Circle.png", Vec2(428, 428));

//Box box(Vec2(200, 200), Vec2(32, 32), GRASS_BLACK);
//
//double speed = 250;

/**
	The code will be ran once, before running the update and draw loop
*/
//void MyGame::Once()
//{
//	//circle.init(renderer);
//	//circle2.init(renderer);
//    box.Draw(renderer);
//}

/**
	Don't have rendering code inside of it, cause it won't clear and draw as intended
*/
//void MyGame::Update(double dt)
//{  
//	
//	box.size.x += speed * dt;
//	box.size.y += speed * dt;
//
//	box.position.x += speed * dt;
//	box.position.y += speed * dt;
//	

    // std::cout << dt << "\n";
    
    /*if (this->KeyPressed(SDL_SCANCODE_UP))
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
        circle2.position.x -= speed * dt;*/

    //std::cout << this->KeyPressed(SDL_SCANCODE_UP) << std::endl;

    //std::cout << (unsigned int)background_color.r << ", " << (unsigned int)background_color.g << ", " << (unsigned int)background_color.b << ";\n";
//}


/**
* Draws everything by clearing the screen, then draws the background color and the code inside this method.
*/

//void MyGame::Draw()
//{
//	
//    //circle.Draw(renderer);
//    //circle2.Draw(renderer);
//    box.Draw(renderer);
//}
