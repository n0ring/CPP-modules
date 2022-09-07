#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain	*_brain;

public:
			Cat( void );
			~Cat( void );
			Cat( Cat const &src);
	Cat		&operator=( Cat const &rhs);
	void	makeSound( void ) const;
};


#endif