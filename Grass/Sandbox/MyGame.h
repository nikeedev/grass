#include <iostream>
#include "../Grass.h"


class MyGame : public Game
{
public:
	

	MyGame() : Game("Game", new Size(800, 600), new Color(100, 149, 237, 0)) {};

	void Once() override;
	void Update(double ts) override;
	void Draw() override;

};
