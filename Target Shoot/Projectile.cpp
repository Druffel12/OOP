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
				Shell[i].speedY = 5 + (i * 3);
				Shell[i].speedX = 0;
				Shell[i].LifeTime = 2;
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
				Shell[i].speedY = -5 + (i * 3);
				Shell[i].speedX = 0;
				Shell[i].LifeTime = 2;
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
				Shell[i].speedX = -5 + (i * 3);
				Shell[i].speedY = 0;
				Shell[i].LifeTime = 2;
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
				Shell[i].speedX = 5 + (i * 3);
				Shell[i].speedY = 0;
				Shell[i].LifeTime = 2;
			}
		}
	}




	/*spawnAccumulator += sfw::getDeltaTime();

	if (spawnAccumulator > spawnInt)
	{
		for (int i = 0; i < 5; i++)
		{
			if (Shell[i].enabled == false)
			{
				Projectile& Ball = Shell[i];

				if (sfw::getKey('W'))
				{
					Ball.posY++;
					if (Ball.posY == 810)
					{
					 enabled = false;
					}
				}

				else if (sfw::getKey('A'))
				{
					Ball.posX--;
					if (Ball.posX == -10)
					{
					 enabled = false;
					}
				}

				else if (sfw::getKey('S'))
				{
					Ball.posY--;
					if (Ball.posY == -10)
					{
					 enabled = false;
					}
				}

				else if (sfw::getKey('D'))
				{
					Ball.posX++;
					if (Ball.posX == 410)
					{
					 enabled = false;
					}
				}
				Ball.enabled = true;
				spawnAccumulator = 0.0f;
				break;
			}
		}
	}*/

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

	//spawnAccumulator = 0.0f;
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
