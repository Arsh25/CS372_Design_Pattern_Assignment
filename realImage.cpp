/*
	realImage.cpp
	Arsh Chauhan
	05/02/2016

	Source for class Realimage
*/

#include "realImage.hpp"

Realimage::Realimage ()
{}

Realimage::Realimage (string fileName): fileName_(fileName)
{
	cout << "Real Image created " << endl;
	loadImage();
} 

void Realimage::display()
{
	cout << "Displaying Image" << fileName_ << endl;
}

void Realimage::loadImage()
{
	cout << "Loaded Image " << fileName_ << " from disk" <<endl;
}

