#include <iostream>
#include "../Grass.h"



Entity* e = new Entity(new Vector2(60, 60), new Size(20, 20), new Size(600, 600));


int main()
{
	std::cout << "Width of entity: " << e->size->width << "\n" << "Height of entity: " << e->size->height << std::endl;
}
