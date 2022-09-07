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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my7XL-double-cheese-triple-pickle-special- ketchup burger."
				<< std::endl << "I really do!" << std::endl << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
				<< std::endl << "You didn’t put enough bacon in my burger!"
				<< std::endl << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
				<< std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!"
				<< std::endl << "I want to speak to the manager now." << std::endl << std::endl;
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
	switch (i)
	{
	case 0:
		(this->*funcs_arr[0])();
	case 1:
		(this->*funcs_arr[1])();
	case 2:
		(this->*funcs_arr[2])();
	case 3:
		(this->*funcs_arr[3])();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}