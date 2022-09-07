#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define ALL 2
#define HALF ALL / 2

int	main( void )
{
	Animal	*a[ALL];

	for (int i = 0; i < HALF; i++)
	{
		a[i] = new Cat();
	}
	for (int i = HALF; i < ALL; i++)
	{
		a[i] = new Dog();
	}

	for (int i = 0; i < ALL; i++)
	{
		delete a[i];
	}
	std::cout << "------CHECK FOR COPY------" << std::endl;
	Cat *obj_a = new Cat();
	Cat *obj_b = new Cat(*obj_a);
	Dog	*obj_aa = new Dog();
	Dog *obj_bb = new Dog(*obj_aa);

	delete obj_a;
	delete obj_aa;
	obj_b->makeSound();
	obj_bb->makeSound();
	delete obj_b;
	delete obj_bb;
}