#include "Vector2.h"
#include <cmath>



Vector2::Vector2()
{
	this->x = 0;
	this->y = 0;
}

Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector2::~Vector2()
{}

void Vector2::normalize()
{
	float magnitude = sqrt((this->x * this->x) + (this->y * this->y));
	this->x /= magnitude;
	this->y /= magnitude;
}

float Vector2::magnitude()
{
	return sqrt(this->x * this->x + this->y * this->y);
}

Vector2* Vector2::lerp(Vector2* v1, Vector2* v2, float t)
{
	float x = v1->x * (1 - t) + v2->x * t;
	float y = v1->y * (1 - t) + v2->y * t;
	return new Vector2(x, y);
};



