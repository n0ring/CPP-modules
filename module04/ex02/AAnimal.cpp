#include "AAnimal.hpp"

AAnimal::AAnimal( void )
{
	this->type = "default_type";
	std::cout << "AAnimal was created" << std::endl;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal was destroy" << std::endl;
}

AAnimal::AAnimal( AAnimal const &srs)
{
	*this = srs;
	std::cout << "AAnimal was copy" << std::endl;
}

AAnimal	&AAnimal::operator=( AAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}