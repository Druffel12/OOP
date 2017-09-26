#include "Shapes.h"

#include "sfwdraw.h"

void Circle::update()
{

}

void Circle::draw()
{
	sfw::drawCircle(posX, posY, radius);
}

void Line::update()
{

}

void Line::draw()
{
	sfw::drawLine(startX, startY, endX, endY);
}

void Box::draw()
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