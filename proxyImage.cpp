/*
	proxyImage.cpp
	Arsh Chauhan
	05/02/2016

	Source for class Proxyimage
*/

#include "proxyImage.hpp"

/*
	2 parameter constructor
	Pre: None
	Post: Creates new Proxyimage with filename fileName
*/
Proxyimage::Proxyimage(string fileName): fileName_(fileName)
{
	cout << "Proxy image created for file " << fileName << endl;
}

/*
	display
	Pre: None
	Post: Creates a bew RealImage with filename 
	         fileName_ and sets realImage_ to that object
		  Calls RealImage's display function with realImage_
*/
void Proxyimage::display()
{
	realImage_ = Realimage(fileName_);
	realImage_.display();
}