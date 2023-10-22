#include <iostream>
#include <Grass.hpp>
#include <vector>
#include <memory>
#include "MyScene.h"

std::vector<std::unique_ptr<Scene>> MyScenes = { std::make_unique<MyScene>("MyScene", Color(100, 149, 237)) };

class MyGame : public Application
{
public:
	

	MyGame() : Application("My Game", Vec2(800, 600), MyScenes, true) {};

	//void Once() override;
	//void Update(double ts) override;
	//void Draw() override;

};
