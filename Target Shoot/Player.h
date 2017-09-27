#pragma once
#include <string>

class Player
{
public:
	float x;
	float y;

	virtual void update();
	virtual void draw();
};