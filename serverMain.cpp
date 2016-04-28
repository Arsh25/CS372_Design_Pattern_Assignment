#include "server.hpp"

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	server mainServer;

	mainServer.create();

	std::vector<string> clients = mainServer.getClients();
	//std::vector<string> messages = mainServer.getMessages();

	while (true)
	{
		mainServer.addClient();

		for (int i=0; i<clients.size(); i++)
		{
			cout << "client: "<<i<<endl;

		}

	}

	return 0; 
}