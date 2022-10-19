#include <iostream>
#include "../src/Grass.h"


class Game : public Application
{
public:
	

	Game() : Application("Application", Vector2(800, 600), Color(100, 149, 237), true) {};

	void Once() override;
	void Update(double ts) override;
	void Draw() override;

};
