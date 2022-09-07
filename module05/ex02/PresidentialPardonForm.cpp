#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
: AForm("Shrubbery_creation_form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( void )
: AForm("Shrubbery_creation_form", 25, 5), _target("default_target")
{
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs )
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src)
: AForm("default_name", 72, 45)
{
	*this = src;
}

void	PresidentialPardonForm::action(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
