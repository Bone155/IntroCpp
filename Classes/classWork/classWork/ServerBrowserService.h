#pragma once
#include "servers.h"

class ServerBrowserService
{
	ServerInfo* servers[50];
	int serverCount = 0;
public:
	ServerBrowserService();
	~ServerBrowserService();

	bool registerServer(ServerInfo newServer);
	int getServers(ServerInfo* dstArray, size_t dstSize, int pingLimit);
	int getServers(ServerInfo* dstArray, size_t dstSize);
};

