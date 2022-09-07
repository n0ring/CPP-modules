#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	a("foo");
	a.attack("some one");
	a.attack("some one");
	a.attack("some one");
	a.attack("some one");
	a.attack("some one");
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.attack("some one");



	return (0);
}