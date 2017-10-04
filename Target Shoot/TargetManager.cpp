#include "TargetManager.h"
#include <random>
#include <ctime>
TargetManager::TargetManager( float startTime)
{
	
	timer = startTime;
	srand(time(NULL));
}

void TargetManager::update()
{
	timer -= sfw::getDeltaTime();

	score = top->score + bot->score + left->score + right->score;

	if (timer < 0)
	{
		y = rand() % 4 + 1;
		timer = .9f;
	}

	if (y == 1)
	{
		left->Target = true;
		top->Target = false;
		bot->Target = false;
		right->Target = false;
	}

	if (y == 2)
	{
		top->Target = true;
		left->Target = false;
		bot->Target = false;
		right->Target = false;
	}

	if (y == 3)
	{
		right->Target = true;
		top->Target = false;
		bot->Target = false;
		left->Target = false;
	}

	if (y == 4)
	{
		bot->Target = true;
		top->Target = false;
		left->Target = false;
		right->Target = false;
	}
	//randomly set a target.enabled = true
	//set timer back to 0
}
