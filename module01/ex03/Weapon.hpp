#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
					Weapon( std::string );
					~Weapon();
		const std::string	getType( void ) const;
		void		setType( std::string );
};


#endif