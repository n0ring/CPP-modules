#include "HumanB.hpp"

HumanB::HumanB( std::string name)
{
	this->_name = name;
	this->_human_weapon = NULL;
	std::cout << "HumanA constructor called" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << "HumanA destructor called" << std::endl;
}

void	HumanB::attack( void )
{
	std::cout << this->_name
		<< " attacks with their "
		<< this->_human_weapon->getType()
		<< std::endl;
}

void	HumanB::setWeapon( Weapon &weapon_el)
{
	this->_human_weapon = &weapon_el;
}