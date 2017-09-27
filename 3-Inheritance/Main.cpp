#include "Person.h"

#include "Officer.h"

#include "Gunman.h"

#include "sfwdraw.h"
#include "Emitter.h"
#include "Particles.h"

int main()
{
	/*Person me("Cole Druffel", 90);
	me.greet();
	me.isHappy();

	Officer Terry("Terry Nguyen", 20, 7142);
	Terry.greet();
	Terry.isHappy();

	Gunman Jeff("Motive for gunmans attack", 30, "Jeff derrin");
	Jeff.StickUp();*/
	
	/*Gunman Jeff;
	me.x = 400;
	me.y = 300;*/

	sfw::initContext(800, 600);

	sfw::setBackgroundColor(BLACK);

	BaseParticle p;
	p.posX = 400;
	p.posY = 300;

	p.speedX = 2;
	p.speedY = -3;

	Box box;

	box.speedX = -2;
	box.speedY = -5;

	box.posX = 700;
	box.posY = 500;

	box.dimX = 20;
	box.dimY = 30;

	Emitter emitter;
	emitter.spawnInt = .2f;

	while (sfw::stepContext())
	{
		p.update();
		p.draw();

		box.update();
		box.draw();

		emitter.update();
		emitter.draw();

	}

	while (true) {}

	return 0;
}