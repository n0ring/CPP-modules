#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	b("Foo");

	b.attack("some target");
	b.guardGate();
	b.beRepaired(10);
	b.takeDamage(100);
	return (0);
}