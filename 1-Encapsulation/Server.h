#pragma once

#include <string>

struct ServerInfo
{
	std::string serverName;
	std::string Region;
	int currentPlayerCount;
	int maxPlayercountn;
	int ping;
};

class ServerBrowserService
{
private:
	const static int SERVERINFO_CAPACITY = 20;

	ServerInfo servers[SERVERINFO_CAPACITY];

	int serverCounter;

public:
	ServerBrowserService();

	bool registerServer(ServerInfo newServer);

	int getServers(ServerInfo * dstArray, size_t dst);
	intgetServersPingLimit(ServerInfo * dstArray)
};