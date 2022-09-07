#include "Karen.hpp"

typedef void (Karen::*func_ptr)(void);


Karen::Karen( void )
{
}

Karen::~Karen( void )
{
}

void	Karen::debug( void )
{
	std::cout << "I love having extra bacon for my7XL-double-cheese-triple-pickle-special- ketchup burger."
				<< std::endl << "I really do!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money."
				<< std::endl << "You didn’t put enough bacon in my burger!"
				<< std::endl << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
				<< std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable!"
				<< std::endl << "I want to speak to the manager now." << std::endl;
}

void	Karen::complain( std::string level )
{
	int			i;
	func_ptr	funcs_arr[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	level_arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	upper_copy;

	i = 0;
	while (level[i])
	{
		upper_copy.push_back(std::toupper(level[i]));
		i++;
	}
	i = 0;
	while (upper_copy.compare(level_arr[i]) && i < 4)
		i++;
	if (i == 4)
	{
		std::cout << "Incorrect level" << std::endl;
		return ;
	}
	(this->*funcs_arr[i])();
}