#pragma once

class Circle
{
public:
	float posX;     // position on the x-axis
	float posY;     // position on the y-axis

	float radius;   // describes the size of the circle

	void update();
	
	void draw();    // draws the circle
};

class Line
{
public:
	float startX;
	float startY;

	float endX;
	float endY;

	void update();

	void draw();
};

class Box
{
public:
	float bottomLeftX;
	float bottomLeftY;

	float topRightX;
	float topRightY;

	void draw();
};