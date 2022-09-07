#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria( void )
{
	this->type = "default_type";
	std::cout << "AMateria was created" << std::endl;
}

AMateria::AMateria( std::string const &type )
{
	this->type = type;
	std::cout << "AMateria was created" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria was destroy" << std::endl;
}

AMateria::AMateria( AMateria const &srs)
{
	*this = srs;
	std::cout << "AMateria was copy" << std::endl;
}

AMateria	&AMateria::operator=( AMateria const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

std::string const &AMateria::getType( void )
{
	return (this->type);
}

void    AMateria::use(ICharacter& target)
{
	std::cout << "* use Amateria to target "
		<< target.getName() <<" *" << std::endl;
}