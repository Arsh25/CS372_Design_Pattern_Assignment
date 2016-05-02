/*
	realImage.hpp
	Arsh Chauhan
	05/02/2016

	CS372 Assignment 4
	Header for Realimage class.
	Load and display a hypothetical image file. 
*/

#ifndef REALIMAGE_HPP
#define REALIMAGE_HPP

#include "image.hpp"

class Realimage: public Image
{
	string fileName_;

public:
	Realimage();
	Realimage(string fileName);
	void display() override;
	void loadImage();

};

#endif