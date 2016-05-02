/*
	proxyImage.cpp
	Arsh Chauhan
	05/02/2016

	Source for class Proxyimage
*/

#include "proxyImage.hpp"

Proxyimage::Proxyimage(string fileName): fileName_(fileName)
{
	cout << "Proxy image created for file " << fileName << endl;
}

void Proxyimage::display()
{
	realImage_ = Realimage(fileName_);
}