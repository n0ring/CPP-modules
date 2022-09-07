#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
				ScavTrap( void );
				ScavTrap( std::string name );
				~ScavTrap( void );
				ScavTrap( ScavTrap const &src);
	ScavTrap	&operator=( ScavTrap const &rhs );
	
		void	attack( const std::string &target );
		void	guardGate( void );
	
};


#endif