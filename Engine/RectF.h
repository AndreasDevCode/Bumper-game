#pragma once
#include "Vec2.h"
class RectF
{
public:
	RectF() = default;
	RectF(float x0_in, float y0_in, float x1_in, float y1_in);
	RectF(const Vec2& pos0,const Vec2& pos1);
	RectF(const Vec2& pos, float width, float height);
	bool IsOverLapping(const RectF& rec);
	static RectF FromCenter(const Vec2& pos_in, float half_right, float half_bottom);



public:
	float left;
	float right;
	float top;
	float bottom;
};

