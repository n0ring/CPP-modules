#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _human_weapon(weapon)
{
    this->_name = name;
    std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA( void )
{
    std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack( void )
{
    std::cout << this->_name
        << " attacks with their "
        << this->_human_weapon.getType()
        << std::endl;
}