#pragma once
#include <string>
#include "sfwdraw.h"

class TargetLeft
{
public:
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
	void update();

	//bool Target = true;
};

class TargetTop
{
public:
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
	void update();

	//bool Target = true;
};

class TargetRight
{
public:
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
	void update();

	//bool Target = true;
};

class TargetBottom
{
public:
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
	void update();

	//bool Target = true;
};