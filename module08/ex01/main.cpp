#include "Span.hpp"

int main( void )
{
	Span	a(3);

	a.addNumber(100);
	a.addNumber(100);
	a.addNumber(102);
	try
	{
		a.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "shortest span: " << a.shortestSpan() << std::endl;
	std::cout << "longest span: " << a.longestSpan() << std::endl;

	Span b(1);
	b.addNumber(1);
	try
	{
		b.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	{
		std::cout << "--subject main--" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "--check insert values--" << std::endl;
		Span sp(100000);
		std::vector<int>	sp2;
		for (int i = 0; i < 100000; i++)		
			sp2.push_back(i);
		sp.addLotNumbers(sp2.begin(), sp2.end());
		std::cout << "shortest span " << sp.shortestSpan() << std::endl;
		std::cout << "longest span " << sp.longestSpan() << std::endl;
	}

	return (0);
}