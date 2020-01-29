#include "Brick.h"


Brick::Brick(const RectF& brick, Color c_in)
	:
	rec(brick),
	c(c_in)
{


}

void Brick::Draw( Graphics& gfx) const {
	gfx.DrawRect(rec,c);
}

