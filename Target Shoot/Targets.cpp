#include "Targets.h"
#include <iostream>
void TargetLeft::draw()
{
	if (Target == true)
	{
		sfw::drawLine(bottomLeftX, bottomLeftY,
			topRightX, bottomLeftY);

		//left

		sfw::drawLine(bottomLeftX, bottomLeftY,
			bottomLeftX, topRightY);

		//top
		sfw::drawLine(bottomLeftX, topRightY,
			topRightX, topRightY);

		//right
		sfw::drawLine(topRightX, topRightY,
			topRightX, bottomLeftY);
	}
}



void TargetLeft::CheckCollision(Projectile &p)
{
	if (p.posX < 20)
	{
		p.enabled = false;
		score += 5;
		std::cout << "Hit" << std::endl;
	}

	else if (p.posX > 780 || p.posY > 780 || p.posY < 20)
	{
		p.enabled = false;
		score -= 10;
	}
}

void TargetTop::draw()
{
	if (Target == true)
	{
		sfw::drawLine(bottomLeftX, bottomLeftY,
			topRightX, bottomLeftY);

		//left

		sfw::drawLine(bottomLeftX, bottomLeftY,
			bottomLeftX, topRightY);

		//top
		sfw::drawLine(bottomLeftX, topRightY,
			topRightX, topRightY);

		//right
		sfw::drawLine(topRightX, topRightY,
			topRightX, bottomLeftY);
	}
}

void TargetTop::CheckCollision(Projectile &p)
{
	if (p.posY > 780)
	{
		p.enabled = false;
		//p.LifeTime = 0;
		score += 5;
		std::cout << "Hit" << std::endl;
		//disable bullet	
	}

	else if (p.posX > 780 || p.posX < 20 || p.posY < 20)
	{
		p.enabled = false;
		score -= 10;
	}
}



void TargetRight::draw()
{
	if (Target == true)
	{
		sfw::drawLine(bottomLeftX, bottomLeftY,
			topRightX, bottomLeftY);

		//left

		sfw::drawLine(bottomLeftX, bottomLeftY,
			bottomLeftX, topRightY);

		//top
		sfw::drawLine(bottomLeftX, topRightY,
			topRightX, topRightY);

		//right
		sfw::drawLine(topRightX, topRightY,
			topRightX, bottomLeftY);
	}
}

void TargetRight::CheckCollision(Projectile &p)
{
	if (p.posX > 780)
	{
		p.enabled = false;
		//p.LifeTime = 0;
		score += 5;
		std::cout << "Hit" << std::endl;
		//disable bullet
	}

	else if (p.posX < 20 || p.posY > 780 || p.posY < 20)
	{
		p.enabled = false;
		score -= 10;
	}
}

void TargetBottom::draw()
{
	//Bottom
	if (Target == true)
	{
		sfw::drawLine(bottomLeftX, bottomLeftY,
			topRightX, bottomLeftY);

		//left

		sfw::drawLine(bottomLeftX, bottomLeftY,
			bottomLeftX, topRightY);

		//top
		sfw::drawLine(bottomLeftX, topRightY,
			topRightX, topRightY);

		//right
		sfw::drawLine(topRightX, topRightY,
			topRightX, bottomLeftY);
	}
}

void TargetBottom::CheckCollision(Projectile &p)
{
	if (p.posY < 20)
	{
		p.enabled = false;
		//p.LifeTime = 0;
		score += 5;
		std::cout << "Hit" << std::endl;
		//disable bullet
	}
	else if (p.posX > 780 || p.posY > 780 || p.posX < 20)
	{
		p.enabled = false;
		score -= 10;
	}
}
