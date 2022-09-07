#include "Weapon.hpp"

Weapon::Weapon( std::string weapon_type ) : _type(weapon_type)
{
    std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon( void )
{
    std::cout << "Weapon destructor called" << std::endl;
}

const std::string Weapon::getType( void ) const
{
    return (this->_type);
}

void    Weapon::setType( std::string type)
{
    this->_type = type;
}