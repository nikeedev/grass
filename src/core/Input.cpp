#include "Input.h"




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


