#include <iostream>
#include <string>
#include <cstring>
#include "sfwdraw.h"
#include "Player.h"
#include "Projectile.h"

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
	
	

	while (sfw::stepContext())
	{
		me.update();
		me.draw();
		gun.draw();
		gun.update();
	}

	

	while (true) {}

	return 0;
}