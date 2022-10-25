#include "vec2.h"
#include <cmath>



vec2::vec2()
{
	this->x = 0;
	this->y = 0;
}

vec2::vec2(float x, float y)
{
	this->x = x;
	this->y = y;
}

vec2::~vec2()
{}

void vec2::normalize()
{
	float magnitude = sqrt((this->x * this->x) + (this->y * this->y));
	this->x /= magnitude;
	this->y /= magnitude;
}

float vec2::magnitude()
{
	return sqrt(this->x * this->x + this->y * this->y);
}

vec2 vec2::lerp(vec2 v1, vec2 v2, float t)
{
	float x = v1.x * (1 - t) + v2.x * t;
	float y = v1.y * (1 - t) + v2.y * t;
	return vec2(x, y);
};



