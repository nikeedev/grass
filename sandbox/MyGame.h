#include <iostream>
#include "../src/grass.h"


class MyGame : public Application
{
public:
	

	MyGame() : Application("My Game", vec2(800 , 600), Color(100, 149, 237), true) {};

	void Once() override;
	void Update(double ts) override;
	void Draw() override;

};
