#include "Cure.hpp"

Cure::Cure( void )
{
	this->type = "cure";
	std::cout << GREEN << "Cure was created" << RESET << std::endl;
}

Cure::Cure( std::string const &type )
{
	this->type = type;
	std::cout << GREEN << "Cure was created" << RESET << std::endl;
}

Cure::~Cure( void )
{
	std::cout << GREEN << "Cure was destroy" << RESET << std::endl;
}

Cure::Cure( Cure const &srs)
{
	*this = srs;
	std::cout << GREEN << "Cure was copy" << RESET << std::endl;
}

Cure	&Cure::operator=( Cure const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Cure*   Cure::clone( void ) const
{
    std::cout << "Clone" << std::endl;
    return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << GREEN << "* heals "<< target.getName() << "’s wounds *"
		<< RESET << std::endl;
}
