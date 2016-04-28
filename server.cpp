#include "server.hpp"

void server::create()
{
	server_.create_tcp();
}

void server::addClient()
{
	msl::socket newClient = server_.accept();
	if(newClient.good())
	{
		clients_.push_back(newClient);
		clientMessages_.push_back("");
	}
}