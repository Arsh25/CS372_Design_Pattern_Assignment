/*
	main.cpp
	Arsh Chauhan
	05/02/2016

	Implements theretical image viewer designed
	using the proxy design pattern
*/
#include "realImage.hpp"
#include "proxyImage.hpp"

int main()
{
	/*
		Create and display a Realimage. Used to 
		demonstarte how Realimage is different from
		Proxyimage
	*/
	cout <<"CREATE AND DISPLAY REAL IMAGE " << endl;
	Realimage test01 ("test01.jpg"); // Image loaded when created
	test01.display();

	cout <<endl; // Make output clearer 

	cout <<"CREATING PROXY IMAGES" << endl;
	// Image not loaded when created
	Proxyimage proxyTest01 ("proxyTest01.jpg");
	Proxyimage proxyTest02 ("proxyTest02.jpg");
	Proxyimage proxyTest03 ("proxyTest03.jpg");

	cout << endl << "LIST ALL FILES" <<endl;
	/* 
		Will not display test01 since it is a Realimage
		and Realimages should never be directly constructed
	*/

	vector<string> files = proxyTest01.getFiles();
	for (auto file: files)
	{
		cout << file <<endl;
	}

	cout <<endl; // Make output clearer

	cout << "DISPLAYING PROXY IMAGES" <<endl;
	//Image loaded when display is called
	proxyTest01.display();
	proxyTest03.display();
	proxyTest02.display();

}