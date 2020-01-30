#pragma once
#include "Vec2.h"
#include "Graphics.h"
class Padle
{
public:
	Padle(const Vec2& pos_in, Color c);
	void Draw(Graphics& gfx, Color c);
public:
	Vec2 pos;
	Color c;
};

