#include "Bureaucrat.hpp"

int	main( void )
{
	{
		std::cout << "---CHECK CREATE EXC---" << std::endl;
		try
		{
			Bureaucrat a("me", 200);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Bureaucrat b("me", -200);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "---CHECK INCREMENT OR DERCREMENT GRADE---" << std::endl;
		try
		{
			Bureaucrat a("me", 1);
			a.incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Bureaucrat b("me", 150);
			b.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "---CHECK NORMAL CASE---" << std::endl;
	Bureaucrat a("me", 100);
	a.decrementGrade(); // to 101
	a.decrementGrade(); // to 102
	a.incrementGrade(); // to 101
	std::cout << a << std::endl;
	return (0);
}