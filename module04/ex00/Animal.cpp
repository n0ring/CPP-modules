#include "Animal.hpp"

Animal::Animal( void )
{
	this->type = "default_type";
	std::cout << "Animal was created" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal was destroy" << std::endl;
}

Animal::Animal( Animal const &srs)
{
	*this = srs;
	std::cout << "Animal was copy" << std::endl;
}

Animal	&Animal::operator=( Animal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << "The object hasn't any type and sound" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}
