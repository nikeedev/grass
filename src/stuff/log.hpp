#include <iostream>

template<typename T>
void Log(T& message, int level = 1)
{
    if (level == 1)
        std::cout << "Info: " << message << std::endl;

    else if (level == 2)
        std::cout << "Warning: " << message << std::endl;

    else if (level == 3)
        std::cout << "Error: " << message << std::endl;

}



