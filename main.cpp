#include "realImage.hpp"
#include "proxyImage.hpp"

int main()
{
	cout <<"CREATE AND DISPLAY REAL IMAGE " << endl;
	Realimage test01 ("test01.jpg");
	test01.display();

	cout <<endl;
	cout <<"CREATING PROXY IMAGES" << endl;
	Proxyimage proxyTest01 ("proxyTest01.jpg");
	Proxyimage proxyTest02 ("proxyTest02.jpg");
	Proxyimage proxyTest03 ("proxyTest03.jpg");

	cout <<endl;

	cout << "DISPLAYING PROXY IMAGES" <<endl;
	proxyTest01.display();
	proxyTest03.display();
	proxyTest02.display();

}