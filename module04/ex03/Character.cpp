#include "Character.hpp"

Character::Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		equip_materia[i] = 0;
		unequip_materia[i] = 0;
	}
    this->_name = "Default_name_character";
	std::cout << "Character was created" << std::endl;
}

Character::Character( std::string const &name )
{
	for (int i = 0; i < 4; i++)
	{
		this->equip_materia[i] = 0;
		this->unequip_materia[i] = 0;
	}
	this->_name = name;
	std::cout << "Character was created" << std::endl;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->equip_materia[i])
			delete this->equip_materia[i];
		if (this->unequip_materia[i])
			delete this->unequip_materia[i];
	}
	std::cout << "Character was destroy" << std::endl;
}

Character	&Character::operator=( Character const &rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (rhs.equip_materia[i])
			{
				if (this->equip_materia[i])
					delete this->equip_materia[i];
				this->equip_materia[i] = rhs.equip_materia[i]->clone();
			}
			else
				this->equip_materia[i] = 0;
			if (rhs.equip_materia[i])
			{
				if (this->unequip_materia[i])
					delete this->unequip_materia[i];
				this->unequip_materia[i] = rhs.equip_materia[i]->clone();
			}
			else
				this->unequip_materia[i] = 0;
		}
	}
	return (*this);
}

Character::Character( Character const &srs)
{
	*this = srs;
	std::cout << "Character was copy" << std::endl;
}

std::string const &Character::getName( void ) const
{
	return (this->_name);
}

void	Character::equip( AMateria* m )
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (!(this->equip_materia[i]))
			break ;
	}
	if (i == 4)
	{
		std::cout << "Inventory is full now" << std::endl;
		return ;
	}

	this->equip_materia[i] = m;
	std::cout << m->getType() << " equip to inv in slot " << i << std::endl;
}

void	Character::unequip( int idx )
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Index to unequip materia incorrect" << std::endl;
		return ;
	}
	if (this->equip_materia[idx])
	{
		this->unequip_materia[idx] = this->equip_materia[idx];
		this->equip_materia[idx] = 0;
		std::cout << "Slot " << idx << " was freed" << std::endl;
	}
	else
		std::cout << "Slot " << idx << " was already free." << std::endl;
}

void	Character::use( int idx, ICharacter& target )
{
	if (idx > 3 || idx < 0 || !(this->equip_materia[idx]))
	{
		std::cout << "Index to use materia incorrect" << std::endl;
		return ;
	}
	this->equip_materia[idx]->use(target);
	// std::cout << "Slot " << idx << " was used" << std::endl;
}