#ifndef SHRUBBERY_CREATION_FORM
#define SHRUBBERY_CREATION_FORM

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;

public:
							ShrubberyCreationForm( std::string const &target );
							ShrubberyCreationForm( void );
							ShrubberyCreationForm( ShrubberyCreationForm const &src );
	ShrubberyCreationForm	&operator=( ShrubberyCreationForm const &rhs );
	virtual					~ShrubberyCreationForm( void );
	virtual void			action( void ) const;

};



#endif