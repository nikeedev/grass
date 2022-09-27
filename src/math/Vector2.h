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

	Vector2 operator+ (const Vector2& pos) {
		return Vector2(this->x - pos.x, this->y + pos.y);
	}

	Vector2 operator+= (const Vector2& pos) {
		return Vector2(this->x - pos.x, this->y + pos.y);
	}
};


