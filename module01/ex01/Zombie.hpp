#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class   Zombie
{
private:
	std::string _name;

public:
			Zombie( void );
			~Zombie( void );
	void	announce( void );
	void	set_name( std::string );
};

Zombie* zombieHorde( int N, std::string name );

#endif