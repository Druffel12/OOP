#include "Player.h"
#include "sfwdraw.h"

void Player::update()
{
	if (sfw::getKey('W'))
	{
	
	}

	if (sfw::getKey('S'))
	{
	
	}

	if (sfw::getKey('A'))
	{
		
	}
	if (sfw::getKey('D'))
	{
		
	}

}

void Player::draw()
{
	sfw::drawCircle(x, y, 25);
}
