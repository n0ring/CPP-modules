#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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

class Animal
{
protected:
		std::string type;
public:
					Animal(	void );
	virtual			~Animal( void );
					Animal( Animal const &src);
	Animal			&operator=( Animal const &rhs);
	virtual	void	makeSound( void ) const;
	std::string		getType( void ) const;

};

#endif