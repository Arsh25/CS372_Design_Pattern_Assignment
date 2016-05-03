/*
	image.hpp
	Arsh Chauhan
	05/02/2016

	CS372 Assignment 4
	Interface for image viewer.

	No associated source file.
*/

#ifndef IMAGE_HPP
#define IMAGE_HPP

/*
	Added theses here to prevent having
	to add them to both serived class headers
*/
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

