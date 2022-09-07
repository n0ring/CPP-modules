#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "Diamond_default";
	ClapTrap::_name = ClapTrap::_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << RED
		<< " DiamondTrap default constructor was called"
		<< RESET << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << RED
		<< " DiamondTrap destructor was called"
		<< RESET << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	ClapTrap::_name = ClapTrap::_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << RED
		<< " DiamondTrap constructor was called"
		<< RESET << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src )
{
	*this = src;
	std::cout << RED
		<< " DiamondTrap copy constructor was called"
		<< RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const &rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		ClapTrap::_name = rhs.ClapTrap::_name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	std::cout << RED
		<< " DiamondTrap assignment operator has been called."
		<< RESET << std::endl;
	return (*this);
}

void	DiamondTrap::attack( const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
		std::cout << RED
		<< " Own name: " << this->_name << ". ClapTrap name: " << ClapTrap::_name
		<< RESET << std::endl;
}