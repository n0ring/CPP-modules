#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	Bureaucrat low_b("me", 140);
	Bureaucrat high_b("me2", 5);
	AForm	*a_28 = new ShrubberyCreationForm("home");
	AForm	*b_28 = new RobotomyRequestForm("home2");
	AForm	*c_28 = new PresidentialPardonForm("home2");


	std::cout << "--- check ShrubberyCreationForm ---" << std::endl;
	low_b.executeForm(*a_28);
	low_b.signAForm(*a_28);
	low_b.executeForm(*a_28);
	high_b.executeForm(*a_28);

	std::cout << "--- check RobotomyRequestForm ---" << std::endl;

	low_b.signAForm(*b_28);
	high_b.signAForm(*b_28);
	high_b.executeForm(*b_28);

	std::cout << "--- check PresidentialPardonForm ---" << std::endl;
	low_b.signAForm(*c_28);
	high_b.signAForm(*c_28);
	high_b.executeForm(*c_28);
	
	delete a_28;
	delete b_28;
	delete c_28;

	return (0);
}