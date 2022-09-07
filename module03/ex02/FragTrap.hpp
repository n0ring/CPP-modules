#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
				FragTrap( void );
				FragTrap( std::string name );
				~FragTrap( void );
				FragTrap( FragTrap const &src);
	FragTrap	&operator=( FragTrap const &rhs);

	void		highFivesGuys( void );
};


#endif