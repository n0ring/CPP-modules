#include "Zombie.hpp"

int main( void )
{
	int		n;
	Zombie	*zombies;

	n = 5;
	zombies = zombieHorde(n, "foo");
	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}