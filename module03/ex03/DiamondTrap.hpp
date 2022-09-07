#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
				DiamondTrap( void );
				~DiamondTrap( void );
				DiamondTrap( std::string name );
				DiamondTrap( DiamondTrap const &src );
DiamondTrap		&operator=( DiamondTrap const &rhs );
		void	attack( const std::string &target );
		void	whoAmI( void );


};



#endif