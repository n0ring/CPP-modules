#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << YELLOW << "WrongCat was created" << RESET << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << YELLOW << "WrongCat was destroy" << RESET << std::endl;
}

WrongCat::WrongCat( WrongCat const &srs)
{
	*this = srs;
	std::cout << YELLOW << "WrongCat was copy" << RESET << std::endl;
}

WrongCat	&WrongCat::operator=( WrongCat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout  << YELLOW << "The object is meow now" << RESET << std::endl;
}
