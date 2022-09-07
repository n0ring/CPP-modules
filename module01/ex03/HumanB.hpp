#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_human_weapon;

public:
			HumanB( std::string);
			~HumanB( void );
	void	attack( void );
	void	setWeapon(Weapon &);
};

#endif