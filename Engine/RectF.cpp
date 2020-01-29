#include "RectF.h"



RectF::RectF(float left_in, float right_in, float top_in, float bottom_in)
	:
	left(left_in),
	right(right_in),
	top( top_in),
	bottom(bottom_in)
{
}

RectF::RectF(const Vec2 & pos0, const Vec2 & pos1)
{
	RectF(pos0.x, pos0.y, pos1.x, pos1.y);
}

RectF::RectF(const Vec2 & pos, float width, float height)
{
	RectF(pos.x, pos.y, pos.x + width, pos.y + height);
}

bool RectF::IsOverLapping(const RectF & rec)
{
	return right > rec.left && left < rec.right  && top < rec.bottom && bottom >rec.top;
}
