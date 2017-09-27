#pragma once

#include <iostream>

#include "Gun.h"

class Gunman : public Gun
{
protected:
	std::string motive;// = ("Motive for gunmans attack");
	int totalammo;// = 30;
	std::string name;// = ("Jeff derrin");

public:
	Gunman();
	Gunman(std::string motive, int totalammo, std::string name);

	void stickUp();

	float x;
	float y;

	virtual void StickUp();
	virtual void update() override;
	virtual void draw() override;
};

