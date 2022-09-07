#ifndef PRESIDENTIAL_PARDON_FORM
#define PRESIDENTIAL_PARDON_FORM


#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;

public:
							PresidentialPardonForm( std::string const &target );
							PresidentialPardonForm( void );
							PresidentialPardonForm( PresidentialPardonForm const &src );
	PresidentialPardonForm	&operator=( PresidentialPardonForm const &rhs );
	virtual					~PresidentialPardonForm( void );
	virtual void			action( void ) const;

};



#endif