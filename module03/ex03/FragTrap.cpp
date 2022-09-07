#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << BLUE
		<< " FragTrap default constructor was called"
		<< RESET << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << BLUE
		<< " FragTrap constructor was called"
		<< RESET << std::endl;
}

FragTrap::FragTrap( FragTrap const &src)
{
	*this = src;
	std::cout << BLUE
	 << " FragTrap copy constructor was called" << RESET << std::endl;
}


FragTrap::~FragTrap( void )
{
	std::cout << BLUE
		<< " FragTrap destructor was called"
		<< RESET << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const &rhs)
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

void FragTrap::highFivesGuys(void)
{
	std::cout << BLUE
		<< "High five!"
		<< RESET << std::endl;
}

