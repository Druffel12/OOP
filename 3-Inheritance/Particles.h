#pragma once

#include "GameObject.h"

class BaseParticle : public GameObject
{
public:
	float speedX;
	float speedY;

	float posX;
	float posY;

	virtual void update() override;
	virtual void draw() override;
};

class Box : public BaseParticle
{
public:

	float dimX;
	float dimY;

	virtual void draw() override;
};