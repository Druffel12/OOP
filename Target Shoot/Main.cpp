#include <iostream>
#include <string>
#include <cstring>
#include "sfwdraw.h"
#include "Player.h"
#include "Projectile.h"
#include "Targets.h"

int main()
{
	int x = 800;
	int y = 800;

	sfw::initContext(x, y, "SFW");

	sfw::setBackgroundColor(BLACK);

	Player me;
	me.x = x/2;
	me.y = y/2;

	Shot gun;
	gun.posX = 400;
	gun.posY = 400;

	TargetLeft rectL;
	rectL.bottomLeftX = 0;
	rectL.bottomLeftY = 375;

	rectL.topRightX = 20;
	rectL.topRightY = 425;

	TargetTop rectT;
	rectT.bottomLeftX = 425;
	rectT.bottomLeftY = 780;

	rectT.topRightX = 375;
	rectT.topRightY = 800;

	TargetRight rectR;
	rectR.bottomLeftX = 800;
	rectR.bottomLeftY = 375;

	rectR.topRightX = 780;
	rectR.topRightY = 425;

	TargetBottom rectB;
	rectB.bottomLeftX = 375;
	rectB.bottomLeftY = 0;

	rectB.topRightX = 425;
	rectB.topRightY = 20;
	
	

	while (sfw::stepContext())
	{
		me.update();
		me.draw();
		gun.draw();
		gun.update();
		rectR.update();
		rectR.draw();
		rectT.update();
		rectT.draw();
		rectL.update();
		rectL.draw();
		rectB.update();
		rectB.draw();
	}

	

	while (true) {}

	return 0;
}