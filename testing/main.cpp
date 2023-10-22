#include <iostream>
#include <vector>

#define Print(var) std::cout << var << std::endl;

class Color {
public:

    int r, g, b, a;

    Color() : r(0), g(0), b(0), a(255)
    {}


    Color(int r, int g, int b, int a)
        : r(r), g(g), b(b), a(a)
    {
    }
};

Color Hex2RGB(int hexValue) {
    Color color
    this->r = ((hexValue >> 32) & 0xFF) / 255.0;  // Extract the RR byte
    this->g = ((hexValue >> 16) & 0xFF) / 255.0;   // Extract the GG byte
    this->b = ((hexValue >> 8) & 0xFF) / 255.0;        // Extract the BB byte
    this->a = (hexValue & 0xFF) / 255.0;
}


int main()
{
    Color cool() = Color.Hex2RGB(0xffffffff);

    std::cin.get();
    
    return 0;
}