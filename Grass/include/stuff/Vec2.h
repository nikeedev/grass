#pragma once


class Vec2
{
public:
	float x;
	float y;

public:
	Vec2();

	Vec2(float x, float y);

	~Vec2();

	void normalize();

	float magnitude();

	Vec2 lerp(Vec2 v1, Vec2 v2, float t);

	Vec2 operator+ (const Vec2& pos) {
		return Vec2(this->x + pos.x, this->y + pos.y);
	}

	Vec2 operator+= (const Vec2& pos) {
		return Vec2(this->x + pos.x, this->y + pos.y);
	}

    Vec2 operator- (const Vec2& pos) {
        return Vec2(this->x - pos.x, this->y - pos.y);
    }

    Vec2 operator-= (const Vec2& pos) {
        return Vec2(this->x - pos.x, this->y - pos.y);
    }
};


