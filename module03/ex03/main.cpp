#include "DiamondTrap.hpp"

int	main( void )
{
	{DiamondTrap a;}
	DiamondTrap b("foo");

	b.whoAmI();
	b.attack("some target");
	b.takeDamage(100);
	b.beRepaired(10);
	return (0);
}