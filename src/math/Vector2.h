#pragma once


class Vector2
{
public:
	float x;
	float y;

public:
	Vector2();

	Vector2(float x, float y);

	~Vector2();

	void normalize();

	float magnitude();

	Vector2 lerp(Vector2 v1, Vector2 v2, float t);

};


