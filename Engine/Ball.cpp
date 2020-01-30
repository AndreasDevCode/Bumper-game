#include "Ball.h"

Ball::Ball(const Vec2& pos_in, const Vec2& vel_in)
	:
	pos(pos_in),
	vel(vel_in)

{
}

void Ball::Draw( Graphics& gfx) {

	SpriteCodex::DrawBall(pos,gfx);
}

void Ball::Update(float dt)
{

	pos += vel * dt;

}


bool Ball::DoWallCollision(const RectF & walls)
{
	bool collided = false;
	const RectF rec = GetRect();

	if (rec.left <= walls.left) {
		pos.x += walls.left + rec.left;
			ReboundX();
			collided = true;
	}
	if (rec.right >= walls.right) {
			pos.x = walls.right -rec.right;
			ReboundX();
			collided = true;

	}	if (rec.top <= walls.top) {
			pos.y += walls.top + rec.top;
			ReboundY();
			collided = true;

	}	if (rec.bottom >= walls.bottom) {
			pos.y = walls.bottom - rec.bottom;
			ReboundY();
			collided = true;
	}
	
	
	return collided;
}

void Ball::ReboundX() {
	vel.x = -vel.x;
}

void Ball::ReboundY() {
	vel.y = -vel.y;
}

RectF Ball::GetRect() const {
	return RectF::FromCenter(pos,radius,radius);
}