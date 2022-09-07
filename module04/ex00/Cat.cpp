#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << GREEN << "Cat was created" << RESET << std::endl;
}

Cat::~Cat( void )
{
	std::cout << GREEN << "Cat was destroy" << RESET << std::endl;
}

Cat::Cat( Cat const &srs)
{
	*this = srs;
	std::cout << GREEN << "Cat was copy" << RESET << std::endl;
}

Cat	&Cat::operator=( Cat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout  << GREEN << "The object is meow now" << RESET << std::endl;
}
