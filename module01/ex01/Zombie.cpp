#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->_name = "default";
	std::cout << "Zombie constructor was called" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie destructor was called" << std::endl;

}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name( std::string name)
{
	this->_name = name;
}