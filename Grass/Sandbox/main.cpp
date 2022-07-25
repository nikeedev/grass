#include <iostream>
#include "../Grass.h"


class Main : public Game 
{

public:
	Main() = default;

	void Once()
	{

	}
	
	void Update(double delta_time)
	{

	}
	
	void Draw()
	{

	}
};



int main()
{
	Main game;

	game.Loop();
}
