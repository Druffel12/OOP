#pragma once

#include <string>

class Gun
{
public:
	std::string gun;

	int type;
	int clip = 7;
	float caliber = .45;

	bool safety();

	virtual void update();
	virtual void draw();
};