#include "stuff/Vec2.h"
#include <cmath>



Vec2::Vec2()
{
	this->x = 0;
	this->y = 0;
}

Vec2::Vec2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vec2::~Vec2()
{}

void Vec2::normalize()
{
	float magnitude = sqrt((this->x * this->x) + (this->y * this->y));
	this->x /= magnitude;
	this->y /= magnitude;
}

float Vec2::magnitude()
{
	return sqrt(this->x * this->x + this->y * this->y);
}

Vec2 Vec2::lerp(Vec2 v1, Vec2 v2, float t)
{
	float x = v1.x * (1 - t) + v2.x * t;
	float y = v1.y * (1 - t) + v2.y * t;
	return Vec2(x, y);
};



