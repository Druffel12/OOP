#pragma once
#include "Targets.h"
class TargetManager
{
public:
	TargetTop *top;
	TargetBottom *bot;
	TargetLeft *left;
	TargetRight *right;

	float timer;

	int score = 0;

	int y;

	TargetManager(float startTime);
	void update();

};