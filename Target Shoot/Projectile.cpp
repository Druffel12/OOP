#include <iostream>
#include "sfwdraw.h"
#include "Projectile.h"

void Shot::update()
{
	if (sfw::getKey('W'))
	{
		for (int i = 0; i < 1; i++)
		{
			if (Shell[i].enabled == false)
			{
				Shell[i].enabled = true;
				Shell[i].posX = posX + (i * 7);
				Shell[i].posY = posY + (i * 5);
				Shell[i].speedY = 9 + (i * 3);
				Shell[i].speedX = 0;
				Shell[i].LifeTime = .75;
			}
		}
	}
	if (sfw::getKey('S'))
	{
		for (int i = 0; i < 1; i++)
		{
			if (Shell[i].enabled == false)
			{
				Shell[i].enabled = true;
				Shell[i].posX = posX + (i * 7);
				Shell[i].posY = posY + (i * 5);
				Shell[i].speedY = -9 + (i * 3);
				Shell[i].speedX = 0;
				Shell[i].LifeTime = .75;
			}
		}
	}
	if (sfw::getKey('A'))
	{
		for (int i = 0; i < 1; i++)
		{
			if (Shell[i].enabled == false)
			{
				Shell[i].enabled = true;
				Shell[i].posX = posX + (i * 5);
				Shell[i].posY = posY + (i * 7);
				Shell[i].speedX = -9 + (i * 3);
				Shell[i].speedY = 0;
				Shell[i].LifeTime = .75;
			}
		}
	}
	if (sfw::getKey('D'))
	{
		for (int i = 0; i < 1; i++)
		{
			if (Shell[i].enabled == false)
			{
				Shell[i].enabled = true;
				Shell[i].posX = posX + (i * 5);
				Shell[i].posY = posY + (i * 7);
				Shell[i].speedX = 9 + (i * 3);
				Shell[i].speedY = 0;
				Shell[i].LifeTime = .75;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (Shell[i].enabled == true)
		{
			Shell[i].update();
		}
		
	}

}

void Projectile::update()
{
	posX += speedX;
	posY += speedY;
	LifeTime -= sfw::getDeltaTime();
	if (LifeTime < 0)
	{
		enabled = false;
	}
}

void Projectile::draw()
{
	sfw::drawCircle(posX, posY, 6, 3);
}
Shot::Shot()
{
	for (int i = 0; i < 5; i++)
	{
		Shell[i].enabled = false;
		Shell[i].posX = 0;
		Shell[i].posY = 0;
		Shell[i].speedX = 0;
		Shell[i].speedY = 0;
		Shell[i].LifeTime = 3;
	}

}

void Shot::draw()
{
	for (int i = 0; i < 5; i++)
	{
		if (Shell[i].enabled)
		{
			Shell[i].draw();
		}
	}
}
