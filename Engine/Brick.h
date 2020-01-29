#pragma once
#include "Graphics.h"
#include "RectF.h"
class Brick
{
public:
	Brick(const RectF& brick,Color c_in);
	void Draw( Graphics& gfx) const;

private:
	RectF rec;
	Color c;
	bool isDestroyed = false;
};

