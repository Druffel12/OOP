#pragma once

#include <string>

class Person
{
	std::string soc;

public:
	Person();
	Person(std::string n, int a, std::string s);

	std::string name;
	int age;

	void print();
	bool checkSoc(std::string test);
};

class TV
{
private:
	int currentChannel;
	int currentVolume;
public:
	TV(int chn, int vol);

	void increaseVolume();
	void decreaseVolume();

	void increaseChannel();
	void decreaseChannel();

};

class Server
{
	std::string Results;
public:
	status(int Ping, int Region);
		void Ping();
		void Region();
};
