#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << YELLOW
		<< " ScavTrap Default constructor was called"
		<< RESET << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << YELLOW << " ScavTrap constructor was called"
		<< RESET << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &src)
{
	*this = src;
	std::cout << YELLOW << " ScavTrap Copy constructor was called"
		<< RESET << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << YELLOW
		<< " ScavTrap destructor was called"
		<< RESET << std::endl;
}

void ScavTrap::attack( const std::string &target)
{
	if (this->_energyPoints < 1)
	{
		std::cout  << YELLOW << "ScavTrap " << this->_name
			<< " hasn't got enough energy points to attack" << RESET << std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout  << YELLOW << "ScavTrap " << this->_name
			<<  " attacks " <<  target
			<< ", causing " << this->_attackDamage << " points of damage!"
			<< RESET << std::endl;
	}
}

void ScavTrap::guardGate( void )
{
	std::cout  << YELLOW << "ScavTrap is now in Gate keeper mode"
		<< RESET << std::endl;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}
