#include <iostream>

#include "sfwdraw.h"

#include "Player.h"

#include "Shapes.h"

int main()
{
	//Create a window and a drawing context
	sfw::initContext(800, 600, "SFW");

	unsigned int imgSolaire = sfw::loadTextureMap("Res/Solaire.jpg");


	//Set the backround color
	sfw::setBackgroundColor(BLACK);

	Player me;
	me.x = 200;
	me.y = 300;

	Player2 you;
	you.x = 600;
	you.y = 300;

	Circle disc;
	disc.posX = 400;
	disc.posY = 400;
	disc.radius = 50;

	Line straight;
	straight.startX = 400;
	straight.startY = 0;

	straight.endX = 400;
	straight.endY = 600;

	Box rect;
	rect.bottomLeftX = 100;
	rect.bottomLeftY = 100;

	rect.topRightX = 200;
	rect.topRightY = 300;


	//Set up the game loop
	while (sfw::stepContext())
	{
		// game code goes here
		//sfw::drawCircle(400, 300, 70);
		rect.draw();


		disc.draw();
		disc.update();

		me.update();
		me.draw();

		you.update();
		you.draw();

		sfw::drawTexture(imgSolaire, 400, 300, 100, 100, sfw::getTime() * 100);
	}

	//Clean up
	sfw::termContext();
}