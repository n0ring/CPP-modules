#ifndef ROBOTOMY_REQUEST_FORM
#define ROBOTOMY_REQUEST_FORM

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string	_target;

public:
							RobotomyRequestForm( std::string const &target );
							RobotomyRequestForm( void );
							RobotomyRequestForm( RobotomyRequestForm const &src );
	RobotomyRequestForm	&operator=( RobotomyRequestForm const &rhs );
	virtual					~RobotomyRequestForm( void );
	virtual void			action( void ) const;

};



#endif