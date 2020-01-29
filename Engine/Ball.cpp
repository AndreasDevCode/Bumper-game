#include "Ball.h"

Ball::Ball(const RectF& rec)
	:
	ball(rec)

{
}

void Ball::Draw(SpriteCodex& sprite, Graphics& gfx) {

	sprite.DrawBall(Vec2((ball.left+ ball.right)/2,(ball.top+ball.bottom)/2),gfx);
}