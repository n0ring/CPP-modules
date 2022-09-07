#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	Intern		a;
	Bureaucrat	high_b("me", 1);
	
	AForm	*form;
	form = a.makeForm("robotomy request", "target");
	if (!form)
		return (1);
	
	high_b.signAForm(*form);
	high_b.executeForm(*form);
	delete form;

	return (0);
}