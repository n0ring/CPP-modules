#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{	
	int	x;

	std::srand(std::time(0));
	x = std::rand() % 3 + 1;
	switch (x)
	{
	case 1:
		return (new A());
	case 2:
		return (new B());
	case 3:
		return (new C());
	default:
		break;
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*> (p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*> (p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*> (p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Not A, B or C" << std::endl;
}

void identify(Base& p)
{
	Base	tmp;

	try
	{
		tmp = dynamic_cast<A&> (p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
	}
	try
	{
		tmp = dynamic_cast<B&> (p);
		std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
	}
	try
	{
		tmp = dynamic_cast<C&> (p);
		std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
	}
}

int main( void )
{
	Base    *ptr_base;
	A		a;
	B		b;
	C		c;

	std::cout << "--check generate--" << std::endl;
	ptr_base =  generate();
	if (ptr_base)
		std::cout << "func generate create a ptr" << std::endl;

	std::cout << "--check identify(*)--" << std::endl;
	if (ptr_base)
	{
		std::cout << "varible ptr_base (random) has type: ";
		identify(ptr_base);
		delete ptr_base;
	}
	std::cout << "varible a has type: ";
	identify(&a);
	std::cout << "varible b has type: ";
	identify(&b);
	std::cout << "varible c has type: ";
	identify(&c);

	std::cout << "--check identify(&)--" << std::endl;
	std::cout << "varible a has type: ";
	identify(a);
	std::cout << "varible b has type: ";
	identify(b);
	std::cout << "varible c has type: ";
	identify(c);
	return (0);
}
