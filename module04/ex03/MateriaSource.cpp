#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		this->learned_materia[i] = 0;
	std::cout << "MateriaSourse was created" << std::endl;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->learned_materia[i])
			delete this->learned_materia[i];
	}
	std::cout << "MateriaSourse was destroy" << std::endl;
}

MateriaSource::MateriaSource( MateriaSource const &srs)
{
	*this = srs;
	std::cout<< "MateriaSourse was copy" << std::endl;
}

MateriaSource	&MateriaSource::operator=( MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs.learned_materia[i])
			{
				if (this->learned_materia[i])
					delete this->learned_materia[i];
				this->learned_materia[i] = rhs.learned_materia[i]->clone();
			}
			else
				this->learned_materia[i] = 0;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria( AMateria* new_materia )
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (!this->learned_materia[i])
			break ;
		if (this->learned_materia[i] == new_materia)
		{
			std::cout << "Learning base already has this materia" << std::endl;
			return ;
		}
	}
	if (i == 4)
		std::cout << "Learning base is full now" << std::endl;
	this->learned_materia[i] = new_materia;
	std::cout << "Materia " << new_materia->getType()
			<< " was learned" << std::endl;
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (!this->learned_materia[i])
		{
			std::cout << "Learning base hasn't type: " << type << std::endl;
			return (NULL);
		}
		if (!(this->learned_materia[i]->getType().compare(type)))
			return (this->learned_materia[i]->clone());
	}
	std::cout << "Learning base hasn't type: " << type << std::endl;
	return (NULL);
}

