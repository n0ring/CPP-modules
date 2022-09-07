#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

class AAnimal
{
protected:
		std::string type;
public:
					AAnimal(	void );
	virtual			~AAnimal( void );
					AAnimal( AAnimal const &src);
	AAnimal			&operator=( AAnimal const &rhs);
	virtual	void	makeSound( void ) const=0;

};

#endif