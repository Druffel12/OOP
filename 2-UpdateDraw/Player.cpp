#include "Player.h"

#include "sfwdraw.h"
void Player::update()
{
	if (sfw::getKey('W'))
	{
		y++; y++; y++; y++; y++;
		if (y > 600)
		{
			y = 600;
		}
	}

	if (sfw::getKey('S'))
	{
		y--; y--; y--; y--; y--;
		if (y < 0)
		{
			y = 0;
		}
	}

	if (sfw::getKey('A'))
	{
		x--; x--; x--; x--; x--;
		if (x < 0)
		{
			x = 0;
		}
	}
	if (sfw::getKey('D'))
	{
		x++; x++; x++; x++; x++;
		if (x > 800)
		{
			x = 800;
		}
	}
	
}

void Player::draw()
{
	sfw::drawCircle(x, y, 25);
}

void Player2::update()
{
	if (sfw::getKey('I'))
	{
		y++; y++; y++; y++; y++;
			if (y > 600)
		{
			y = 600;
		}
	}

	if (sfw::getKey('K'))
	{
		y--; y--; y--; y--; y--;
		if (y < 0)
		{
			y = 0;
		}
	}

	if (sfw::getKey('J'))
	{
		x--; x--; x--; x--; x--;
		if (x < 0)
		{
			x = 0;
		}
	}
	if (sfw::getKey('L'))
	{
		x++; x++; x++; x++; x++;
		if (x > 800)
		{
			x = 800;
		}
	}

}

void Player2::draw()
{
	sfw::drawCircle(x, y, 25);
}

