/*
	image.hpp
	Arsh Chauhan
	05/02/2016

	CS372 Assignment 4
	Interface for proxy pattern design pattern.
*/

#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

class Image
{
	protected:
		Image() // Clients cannot create Image objects
		{};
	public:
		virtual void display() = 0;
};

#endif

