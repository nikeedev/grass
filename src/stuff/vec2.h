#pragma once


class vec2
{
public:
	float x;
	float y;

public:
	vec2();

	vec2(float x, float y);

	~vec2();

	void normalize();

	float magnitude();

	vec2 lerp(vec2 v1, vec2 v2, float t);

	vec2 operator+ (const vec2& pos) {
		return vec2(this->x - pos.x, this->y + pos.y);
	}

	vec2 operator+= (const vec2& pos) {
		return vec2(this->x - pos.x, this->y + pos.y);
	}
};


