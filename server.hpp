#ifndef SERVER_H
#define SERVER_H

#include "interface.hpp"


class server:public interface
{

private:
	std::vector<msl::socket> clients_;
	std::vector<std::string> clientMessages_;

public:
	server( unsigned int serverPort = 8080): interface((SOCKET)serverPort)
	{}
	server() = delete;

	void create();
	void addClient();
	vector<std::string> getClients ();
	vector<std::string> getMessages();





};

#endif
