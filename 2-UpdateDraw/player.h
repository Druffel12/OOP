#pragma once

class Player
{
public:
	float x;
	float y;

	void update();
	void draw();
};

class Player2
{
public:
	float x;
	float y;

	void update();
	void draw();
};


class Circle
{
public:
	float posX;     // position on the x-axis
	float posY;     // position on the y-axis

	float radius;   // describes the size of the circle
	
	void update();
	void draw();    // draws the circle
};
