#include <iostream>
#include "person.h"

int main()
{
	/*Person human("Cole", 20, "111-111-1111");
	human.print();
	if (human.checkSoc("111-111-1111"))
	{
		std::cout << "MATCH" << std::endl;
	}
	else
	{
		std::cout << "NO MATCH" << std::endl;
	}
	Person underling("Kobs", 19, "222-222-2222");
	underling.print();

	Person student("Xavier", 19, 333-333-3333);
	student.print();

	TV Television("currentVolume");
	{
		Television.print();
		std::cin >> currentVolumeume >> std::endl;
		if (currentVolumeume = +)
		{
			currentVolume = currentVolume++;
				std::cout << currentVolume << std::endl;
		}
		else if (currentVolumeume = -)
		{
			currentVolume = currentVolume--;
				std::cout << currentVolume << std::endl;
		}
		else
		{
			std::cout << " U Wot" << std::endl;
			return();
		}
	}*/
	ServerInfo server[5];

	for (int i = 0; i < 5; i++)
	{
		server[i].serverName = "AwesomeTown";
		server[i].region = "NA";
		server[i].maxPlayerCount = 16;
		server[i].currentPlayerCount = 2;
		server[i].ping = 30;
	}

	ServerBrowserService serverBrowserSerice;
	
	serverBrowserSerice.registerServer(server01);

	ServerInfo *arr[20];

	serverBrowserSerice.getServers(arr, 5)

	while (true) {}
}