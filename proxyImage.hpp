/*
	proxyImage.hpp
	Arsh Chauhan
	05/02/2016

	CS372 Assignment 4
	Header for Proxyimage class.
	Create a proxy image.
	Does not perform any hypothtical disk access 
	unless display is called. 
	Saves unnecessary disk operations. 
*/

#ifndef PROXYIMAGE_HPP
#define PROXYIMAGE_HPP

#include "realImage.hpp"
#include <vector>
using std::vector;

class Proxyimage:public Image
{
	string fileName_;
	Realimage realImage_;
	static vector<string> files_;

public:
	Proxyimage(string fileName);
	void display() override;
	vector<string> getFiles();




};

#endif