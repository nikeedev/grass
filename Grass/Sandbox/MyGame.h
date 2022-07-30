#include <iostream>
#include "../Grass.h"


class MyGame : public Game
{
public:
	static Entity* box;

	MyGame() : Game("Game", new Size(800, 600)) {};

	void Once() override;
	void Update(double ts) override;
	void Draw() override;

};
