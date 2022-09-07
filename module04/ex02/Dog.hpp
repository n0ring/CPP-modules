#ifndef Dog_HPP
#define Dog_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain	*_brain;
public:
			Dog( void );
			~Dog( void );
			Dog( Dog const &src);
	Dog		&operator=( Dog const &rhs);
	void	makeSound( void ) const;
};


#endif