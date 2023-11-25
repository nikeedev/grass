#include <iostream>
#include "MyGame.h"
#include "MyScene.h"

int main()
{
	MyGame Application;

    Application.addScene(std::make_unique<MyScene>());

	Application.Run();
}

