#pragma once

#include <iostream>

#include "Person.h"

Person::Person()
{
	name = "Cole";
	age = 0;
}

Person::Person(std::string n, int a, std::string s)
{
	name = n;
	age = a;
	soc = s;
}

void Person::print()
{
	std::cout << name << std::endl;
	std::cout << age << std::endl;
}

bool Person::checkSoc(std::string test)
{
	return soc == test;
}

//TV::TV
//{
//	currentChannel = 6;
//	currentVolume = 50;
//}

void TV::increaseChannel()
{
	
}

Server::status(int Ping, int Region)
{
	std::cout << Region << std::endl;
}

void Server::Ping()
{
	std::cout << Ping << std::endl;
}