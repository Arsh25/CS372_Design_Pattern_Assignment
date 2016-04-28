#Makefile for server and client 

COMPILER=g++

STD=c++11

FLAGS= -std=$(STD)  -Wall -pedantic -Wno-deprecated-declarations 

FILES=interface.cpp socket.cpp socket_util.cpp time_util.cpp

server: serverMain.cpp server.cpp $(FILES)
	$(COMPILER)  $^ $(FLAGS) -o $@