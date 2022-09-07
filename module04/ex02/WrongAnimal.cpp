#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	this->type = "default_type";
	std::cout << "WrongAnimal was created" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal was destroy" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &srs)
{
	*this = srs;
	std::cout << "WrongAnimal was copy" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "The object hasn't any type and sound" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}
