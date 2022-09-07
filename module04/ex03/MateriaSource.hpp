#ifndef MATERIASOURSE_HPP
#define MATERIASOURSE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*learned_materia[4];

	public:
					MateriaSource( void );
					~MateriaSource( void );
					MateriaSource( MateriaSource const &srs);
	MateriaSource	&operator=( MateriaSource const &rhs);
	

		void 		learnMateria( AMateria* );
		AMateria*	createMateria( std::string const & type );
};


#endif


