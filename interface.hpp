#ifndef INTERFACE_H
#define INTERFACE_H

#include "socket.hpp" // Mike Moss's socket library
#include "socket_util.hpp"
#include <string>
using std::string;
#include <vector>
using std::vector;



class interface
{

protected:
	SOCKET listenPort_;
	msl::socket server_;

public:
	interface(SOCKET  listenPort = 0);
	interface() = delete;



};

#endif