#include "interface.hpp"

interface::interface( SOCKET listenPort)
{
	listenPort_ = listenPort;
	string host = "0.0.0.0" + std::to_string(listenPort_);
	server_ = msl::socket (host);
}