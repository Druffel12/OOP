#pragma once

#include "GameObject.h"

#include "Particles.h"

class Emitter : public GameObject
{

	float spawnAccumulator = 0;

public:
	Emitter();
	BaseParticle particles[100];

	int particleId;
	
	float spawnInt;

	virtual void update();
	virtual void draw();



};