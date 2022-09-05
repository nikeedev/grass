#include <iostream>
#include "../src/Grass.h"


class MyGame : public Game
{
public:
	

	MyGame() : Game("Game", Size(800, 600), Color(100, 149, 237), true) {};

	void Once() override;
	void Update(double ts) override;
	void Draw() override;

};
