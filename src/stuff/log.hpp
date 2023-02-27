#include <iostream>

template<typename T>
void Log(T message, int level = 1)
{
   
    std::cout << "LOG: " << message << std::endl;

}



