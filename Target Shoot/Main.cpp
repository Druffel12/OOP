#include <iostream>
#include <string>
#include <cstring>
#include "sfwdraw.h"
#include "Player.h"
#include "Projectile.h"
#include "Targets.h"
#include "TargetManager.h"
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
	
	TargetManager tm(2);
	tm.bot = &rectB;
	tm.top = &rectT;
	tm.right = &rectR;
	tm.left = &rectL;


	while (sfw::stepContext())
	{
		std::string score = std::to_string(tm.score);
		tm.update();
		sfw::drawString(sfw::loadTextureMap("fontmap.png", 16, 16), score.c_str(), 700, 700, 20, 20);
		me.update();
		me.draw();
		gun.draw();
		gun.update();
		rectR.draw();
		if (rectR.Target == true)
			for (int i = 0; i < 5; i++)
			{
				if (gun.Shell[i].enabled == true)
					rectR.CheckCollision(gun.Shell[i]);
				
			}
		
		rectT.draw();
		if (rectT.Target == true)
			for (int i = 0; i < 5; i++)
			{
				if (gun.Shell[i].enabled == true)
					rectT.CheckCollision(gun.Shell[i]);
				
			}

		rectL.draw();
		if (rectL.Target == true)
			for (int i = 0; i < 5; i++)
			{
				if(gun.Shell[i].enabled == true)
					rectL.CheckCollision(gun.Shell[i]);
				
			}

		rectB.draw();
		if (rectB.Target == true)
			for (int i = 0; i < 5; i++)
			{
				if (gun.Shell[i].enabled == true)
					rectB.CheckCollision(gun.Shell[i]);
			}

	}

	

	while (true) {}

	return 0;
}