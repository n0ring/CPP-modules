#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << RED << "Dog was created" << RESET << std::endl;
}

Dog::~Dog( void )
{
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
		this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << RED << "The object is barking now" << RESET << std::endl;
}

