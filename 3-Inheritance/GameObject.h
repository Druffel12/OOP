#pragma once
#include <string>

class GameObject
{
public:
	bool enabled;
	std::string name;

	virtual void update();
	virtual void draw();
};