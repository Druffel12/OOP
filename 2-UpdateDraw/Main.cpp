#include <iostream>

#include "sfwdraw.h"

#include "Player.h"

int main()
{
	//Create a window and a drawing context
	sfw::initContext(800, 600, "SFW");

	//Set the backround color
	sfw::setBackgroundColor(BLACK);

	Player me;
	me.x = 200;
	me.y = 300;

	Player2 you;
	you.x = 600;
	you.y = 300;

	Circle play1;
	play1.posX = 10;
	play1.posY = 20;
	play1.radius = 15;

	//Set up the game loop
	while (sfw::stepContext())
	{
		// game code goes here
		//sfw::drawCircle(400, 300, 70);
		play1.update();
		play1.draw();
		me.update();
		me.draw();
		you.update();
		you.draw();
	}

	//Clean up
	sfw::termContext();
}