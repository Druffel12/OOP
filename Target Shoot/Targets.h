#pragma once
#include <string>
#include "sfwdraw.h"
#include "Projectile.h"
class TargetLeft
{
public:

	int score = 0;

	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
	void CheckCollision(Projectile &p);

	bool Target = false;
};

class TargetTop
{
public:

	int score = 0;

	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
	void CheckCollision(Projectile &p);

	bool Target = false;
};

class TargetRight
{
public:

	int score = 0;

	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
	void CheckCollision(Projectile &p);

	bool Target = false;
};

class TargetBottom
{
public:

	int score = 0;

	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
	void CheckCollision(Projectile &p);

	bool Target = false;
};