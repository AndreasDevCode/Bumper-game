#pragma once
#include "Vec2.h"
#include "Graphics.h"
#include "RectF.h"
#include "SpriteCodex.h"
class Ball 
{
public:
	Ball(const RectF& rec);
	void Draw(SpriteCodex& sprite, Graphics& gfx);
public:
	RectF ball;
	
};