#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


class	AForm;

class	Intern
{

public:
						Intern( void );
						Intern( Intern const &src );
	Intern			&operator=( Intern const &rhs );
						~Intern( void );
	AForm			*makeForm( std::string const &formName, std::string const &target );
};


#endif