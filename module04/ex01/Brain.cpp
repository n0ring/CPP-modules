#include "Brain.hpp"


Brain::Brain( void )
{
	std::cout << CYAN << "Brain was created" << RESET << std::endl;
}

Brain::~Brain( void )
{
	std::cout << CYAN << "Brain was destroy" << RESET << std::endl;
}

Brain::Brain( Brain const &srs)
{
	*this = srs;
	std::cout << CYAN << "Brain was copy" << RESET << std::endl;
}

Brain	&Brain::operator=( Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}