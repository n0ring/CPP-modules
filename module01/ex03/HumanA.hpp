#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_human_weapon;

public:
			HumanA( std::string, Weapon & );
			~HumanA( void );
	void	attack( void );
};

#endif