#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

// don't delete equip materia

int main( void )
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
	ICharacter* bob = new Character("bob");
	std::cout << "----CHECK OUTPUT FOR SUBJ----" << std::endl;
	me->use(0, *bob);
    me->use(1, *bob);
	std::cout << "---------------------" << std::endl;
	delete bob;
	delete me;
	delete src;
	return (0);
}