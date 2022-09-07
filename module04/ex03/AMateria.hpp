#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

class ICharacter;

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

class AMateria
{
protected:
		std::string type;
public:
						AMateria( void );
						AMateria( std::string const & type );
	virtual				~AMateria( void );
						AMateria( AMateria const &src);
	AMateria			&operator=( AMateria const &rhs);
	std::string const	&getType( void );
	virtual AMateria*	clone( void ) const = 0;
	virtual void		use(ICharacter& target);
};

#endif