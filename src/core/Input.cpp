#include "Input.h"

const char* Input::keys[5] =
{
	"up",

	"down",

	"left",

	"right"

	"space "
};

bool Input::keyBools[5] =
{
	false,
	false,
	false,
	false,
	false 
};



bool Input::KeyDown(const char* key)
{	
	bool answer;

	for (int i = 0; i < (int)(sizeof(keys) / sizeof(const char*)); i++)
	{
		if (keys[i] == key)
			answer = keyBools[i];
	}

	return answer;
}


