#include "Server.h"

ServerBrowserService::ServerBrowserService()
{
	serverCounter = 0;
}

bool ServerBrowserService::registerServer(ServerInfo newServer);
{
	//Find the index to put the server
	if (serverCounter < SERVERINFO_CAPACITY)
	{
		servers[serverCounter] = newServer;
		serverCounter++;
		return true;
	}
	else
	{
		return false;
	}

	//add that server to our array of servers

	//return true or false if we succesfully added
	// a server

}

int ServerBrowserService::getServers(ServerInfo * astArray)
{
	int size;
	for
}
