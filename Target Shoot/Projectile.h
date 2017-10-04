#pragma once
#include "Projectile.h"

class Projectile
{
public:

	float speedX;
	float speedY;

	float LifeTime;

	float posX;
	float posY;

	void update();
	void draw();
	
	bool enabled;

};

class Shot 
{

	//float spawnAccumulator = 0;

public:
	Shot();
	Projectile Shell[5];

	float posX;
	float posY;

	//int particleId;

	//float spawnInt;

	 void update();
	 void draw();

};