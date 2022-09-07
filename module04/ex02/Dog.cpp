#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << RED << "Dog was created" << RESET << std::endl;
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << RED << "Dog was destroy" << RESET << std::endl;
}

Dog::Dog( Dog const &srs)
{
	*this = srs;
	std::cout << RED << "Dog was copy" << RESET << std::endl;
}

Dog	&Dog::operator=( Dog const &rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << RED << "The object is barking now" << RESET << std::endl;
}

