#include <iostream>

#include "Gunman.h"

#include "sfwdraw.h"

Gunman::Gunman()
{
	motive = "Motive for gunmans attack";
	name = "Jeff derrin";
	totalammo = 30;


}

Gunman::Gunman(std::string motive, int totalammo, std::string name)
{
	motive = motive;
	name = name;
	totalammo = totalammo;
}

void Gunman::StickUp()
{
	std::cout << "This is a stick up!!" << std::endl;;
}


void Gunman::update()
{
	if (sfw::getKey('W')) { y++; }
	if (sfw::getKey('S')) { y--; }
	if (sfw::getKey('D')) { x++; }
	if (sfw::getKey('A')) { x--; }
}

void Gunman::draw()
{
	sfw::drawCircle(x, y, 25);
}
