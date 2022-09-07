#include <iostream>
#include "Array.hpp"


int main( void )
{
	Array<int> a(5);
	a[0] = 42;
	a[1] = 21;
	a[2] = 221;
	a[3] = 442;
	a[4] = 421;
	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	try
	{
		std::cout << a[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Array<int> b(a);
	std::cout << b[0] << std::endl;
	std::cout << b[1] << std::endl;
	try
	{
		std::cout << b[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Array<int> c;
	c = b;
	std::cout << c;

	return (0);
}