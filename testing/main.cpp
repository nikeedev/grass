#include <iostream>
#include <array>


class vec2
{
public:
    float x;
    float y;

public:
    vec2()
    {
        this->x = 0;
        this->y = 0;
    }

    vec2(float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    ~vec2()
    {}
};


void Print(vec2* vectors, size_t n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << vectors[i].x << ", " << vectors[i].y << std::endl;
    }
}

int main()
{
    vec2 vecs[2] = {vec2(5,5), vec2(8,8)};

    Print(vecs, sizeof(vecs) / sizeof(vec2));

    std::cin.get();
    
    return 0;
}