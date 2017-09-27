#pragma once

#include <iostream>

#include "Person.h"

class Officer : public Person
{
protected:
	int badgeNumber;

public:
	Officer();
	Officer(std::string initialName,
		int initialHappiness,
		int intitalBadgeNumber);

	virtual void greet() override;
};