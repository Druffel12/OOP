#include "Targets.h"

void TargetLeft::draw()
{
	//Bottom
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

void TargetLeft::update()
{
	//if()
	//Target = false
}

void TargetTop::draw()
{
	//Bottom
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

void TargetTop::update()
{

}

void TargetRight::draw()
{
	//Bottom
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

void TargetRight::update()
{

}

void TargetBottom::draw()
{
	//Bottom
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

void TargetBottom::update()
{

}
