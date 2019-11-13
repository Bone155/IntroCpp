#include <iostream>
#include "Television.h"
#include "DigitalPiggyBank.h"
#include "ServerBrowserService.h"

using namespace std;

void TV() {
	Television t;
	t.decreaseVolume();
	t.increaseVolume();
	t.decreaseVolume();
	t.decreaseVolume();
	t.increaseVolume();
	t.increaseChannel();
	t.decreaseChannel();
	t.increaseChannel();
	t.increaseChannel();
	t.decreaseChannel();
	t.decreaseChannel();
	cout << "Volume: " << t.volume() << endl;
	cout << "Channel: " << t.channel() << endl;
}

void DPB() {
	DigitalPiggyBank d;
	d.Deposit(100.75);
	d.Deposit(34.50);
	d.Deposit(220.45);
	d.withdraw();
	cout << endl << d.balance() << endl;
}

void SBS() {
	ServerBrowserService sbs;
	ServerInfo servers[2];

	servers[0].regionID = 1;
	servers[0].ping = 2;
	servers[0].maxPlayers = 10;
	servers[0].currentPlayerCount = 5;
	sbs.registerServer(servers[0]);

	servers[1].regionID = 8;
	servers[1].ping = 6;
	servers[1].maxPlayers = 15;
	servers[1].currentPlayerCount = 10;
	sbs.registerServer(servers[1]);

	servers[2].regionID = 8;
	servers[2].ping = 16;
	servers[2].maxPlayers = 15;
	servers[2].currentPlayerCount = 10;
	sbs.registerServer(servers[2]);

	cout << sbs.getServers(servers, 3);

}

int main() {
	
	//TV();
	//DPB();
	SBS();

	while(true){}
	return 0;
}