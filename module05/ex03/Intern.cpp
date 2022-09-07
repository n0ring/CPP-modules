#include "Intern.hpp"

Intern::Intern( void )
{
}

Intern::~Intern( void )
{
}

Intern	&Intern::operator=( Intern const &rhs )
{
	if (this != &rhs)
	{

	}
	return (*this);
}

Intern::Intern( Intern const &srs)
{
	*this = srs;
}


AForm *Intern::makeForm( std::string const &formName, std::string const &target )
{
	int		i = 0;
	AForm	*ptr = NULL;

	std::string arr[] = { "robotomy request", "presidential request",  "Shrubbery request" };
	while (arr[i] != formName && i < 3)
		i++;
	switch (i)
	{
	case 0:
		ptr = new RobotomyRequestForm(target);
		break ;
	case 1:
		ptr = new PresidentialPardonForm(target);
		break ;
	case 2:
		ptr = new ShrubberyCreationForm(target);
		break ;
	}
	if (i == 3)
		std::cout << "There is not form such as " << formName << std::endl;
	else
		std::cout << "Intern creates " << ptr->getName() << std::endl;
	return (ptr);
}
