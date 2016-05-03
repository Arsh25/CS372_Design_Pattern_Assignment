/*
	realImage.cpp
	Arsh Chauhan
	05/02/2016

	Source for class Realimage
*/

#include "realImage.hpp"

Realimage::Realimage ()
{}

/*
	2 parameter constructor
	Pre: None
	Post: Creates new Realimage with filename fileName
*/
Realimage::Realimage (string fileName): fileName_(fileName)
{
	cout << "Real Image created " << endl;
	loadImage();
} 

/*
	display
	Pre: None
	Post: Prints to stdout 
		Theoretically: Displays an image 
*/
void Realimage::display()
{
	cout << "Displaying Image" << fileName_ << endl;
}

/*
	loadImage
	Pre: None
	Post: Prints to stdout 
		Theoretically: Loads an image from disk 
*/
void Realimage::loadImage()
{
	cout << "Loaded Image " << fileName_ << " from disk" <<endl;
}

