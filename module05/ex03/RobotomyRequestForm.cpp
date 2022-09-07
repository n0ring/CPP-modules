#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
: AForm("Shrubbery_creation_form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( void )
: AForm("Shrubbery_creation_form", 72, 45), _target("default_target")
{
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs )
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src)
: AForm("default_name", 72, 45)
{
	*this = src;
}

void	RobotomyRequestForm::action(void) const
{
	std::cout << "some drrrrrrrrilling noises" << std::endl;
	std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
}
