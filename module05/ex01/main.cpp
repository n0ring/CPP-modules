#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	std::cout << "---check form grades---" << std::endl;
	try
	{
		Form a("my", 200, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form b("my", 0, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "---check signForm---" << std::endl;
	Form		b("b", 100, 100);
	Bureaucrat	c("me", 50);
	c.signForm(b);
	std::cout << b << std::endl;
	c.signForm(b);

	std::cout << "---check signForm (low grade)---" << std::endl;
	Form	f("f", 1, 1);
	c.signForm(f);
	std::cout << f << std::endl;


	
	
	return (0);
}