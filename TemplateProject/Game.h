#include <iostream>
#include <grass.h>


class Game : public Application
{
public:
	

	Game() : Application("Application", vec2(800, 600), Color(100, 149, 237), true) {};

	void Once() override;
	void Update(double ts) override;
	void Draw() override;

};
