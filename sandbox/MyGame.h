#include <iostream>
#include "../src/Grass.h"


class MyGame : public Application
{
public:
	

	MyGame() : Application("Application", Vector2(800, 600), Color(100, 149, 237), true) {};

	void Once() override;
	void Update(double ts) override;
	void Draw() override;

};
