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

class Proxyimage:public Image
{
	string fileName_;
	Realimage realImage_;

public:
	Proxyimage(string fileName);
	void display() override;




};

#endif