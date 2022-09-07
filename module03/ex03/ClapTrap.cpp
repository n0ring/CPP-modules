#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap constructor was called" << std::endl;
}

ClapTrap::ClapTrap( void )
{
	this->_name = "unname";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap default constructor was called" << std::endl;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs )
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

ClapTrap::ClapTrap( ClapTrap const	&src  )
{
	*this = src;
	std::cout << "ClapTrap copy constructor was called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor was called" << std::endl;
}

void	ClapTrap::attack( const std::string &target)
{
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name
			<< " hasn't got enough energy points to attack" << std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name
			<<  " attacks " <<  target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name
			<< " already hasn't any points of health" << std::endl;
	}
	else
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name
			<<  " takes "
			<< amount << " points of damage!" << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amout )
{
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name
			<< " hasn't got enough hit points to repaire!" << std::endl;
	}
	else
	{
		this->_energyPoints--;
		this->_hitPoints += amout;
		std::cout << "ClapTrap " << this->_name
			<< " repaires itself for " << amout << " points!" << std::endl;
	}
}
