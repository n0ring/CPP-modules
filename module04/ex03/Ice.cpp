#include "Ice.hpp"

Ice::Ice( void )
{
	this->type = "ice";
	std::cout << BLUE << "Ice was created" << RESET << std::endl;
}

Ice::Ice( std::string const &type )
{
	this->type = type;
	std::cout << BLUE << "Ice was created" << RESET << std::endl;
}

Ice::~Ice( void )
{
	std::cout << BLUE << "Ice was destroy" << RESET << std::endl;
}

Ice::Ice( Ice const &srs)
{
	*this = srs;
	std::cout << BLUE << "Ice was copy" << RESET << std::endl;
}

Ice	&Ice::operator=( Ice const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Ice*   Ice::clone( void ) const
{
	std::cout << "Clone func was called" << std::endl;
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << BLUE << "* shoots an ice bolt at "
		<< target.getName() <<" *" << RESET << std::endl;
}
