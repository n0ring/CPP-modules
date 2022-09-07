#include "Zombie.hpp"

Zombie::Zombie( std::string input_name) : _name(input_name)
{
	std::cout << "Zombie constructor was called" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie destructor was called" << std::endl;

}

void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}