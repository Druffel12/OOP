#include "Emitter.h"

#include "sfwdraw.h"

Emitter::Emitter()
{
	for (int i = 0; i < 100; ++i)
	{
		particles[i].enabled = false;
	}
}

void Emitter::update()
{
	spawnAccumulator += sfw::getDeltaTime();

	if (spawnAccumulator > spawnInt)
	{

		for (int i = 0; i < 100; ++i)
		{
			if (particles[i].enabled == false)
			{
				BaseParticle& baby = particles[i];

				baby.posX = 400;
				baby.posY = 300;

				baby.speedX = 0;
				baby.speedY = 2;

				baby.enabled = true;

				spawnAccumulator = 0.0f;
				break;
			}
		}
	}

	for (int i = 0; i < 100; ++i)
	{
		if (particles[i].enabled == true)
		{
			particles[i].update();
		}
	}
}

void Emitter::draw()
{
	for (int i = 0; i < 100; ++i)
	{
		if (particles[i].enabled)
		{
			particles[i].draw();
		}
	}
}