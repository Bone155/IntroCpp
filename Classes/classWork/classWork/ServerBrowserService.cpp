#include "ServerBrowserService.h"



ServerBrowserService::ServerBrowserService()
{
}


ServerBrowserService::~ServerBrowserService()
{
}

bool ServerBrowserService::registerServer(ServerInfo newServer)
{
	if (serverCount > 50)
		return false;

	servers[serverCount] = &newServer;
	serverCount++;

	servers[serverCount++] = &newServer;

	return true;
}

int ServerBrowserService::getServers(ServerInfo* dstArray, size_t dstSize, int pingLimit)
{
	dstArray = new ServerInfo[50];
	int svrsCopied = 0;
	int dstIndex = 0;
	for (svrsCopied = 0; svrsCopied < dstSize; svrsCopied++) {
		if (servers[svrsCopied]->ping < pingLimit)
			dstArray[svrsCopied] = *servers[svrsCopied];
		dstIndex++;
	}
	return dstIndex;
}

int ServerBrowserService::getServers(ServerInfo* dstArray, size_t dstSize)
{
	dstArray = new ServerInfo[50];
	int svrsCopied = 0;

	for (svrsCopied = 0; svrsCopied < dstSize; svrsCopied++)
	{
		dstArray[svrsCopied] = *servers[svrsCopied];
	}

	return svrsCopied;
}
