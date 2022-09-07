#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
: AForm("Shrubbery_creation_form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( void )
: AForm("Shrubbery_creation_form", 145, 137), _target("default_target")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs )
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src)
: AForm("default_name", 145, 137)
{
	*this = src;
}

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream	file(this->_target + "_shrubbery");
	if (!file.is_open())
	{
		std::cout << "file isn't open" << std::endl;
		return ;
	}
	file << "         | " << std::endl;
	file << "        -+- " << std::endl;
	file << "         A " << std::endl;
	file << "        /=\\               /\\  /\\    ___  _ __  _ __ __    __ " << std::endl;
	file << "      i/ O \\i            /  \\/  \\  / _ \\| '__|| '__|\\ \\  / / " << std::endl;
	file << "      /=====\\           / /\\  /\\ \\|  __/| |   | |    \\ \\/ / " << std::endl;
	file << "      /  i  \\           \\ \\ \\/ / / \\___/|_|   |_|     \\  / " << std::endl;
	file << "    i/ O * O \\i                                       / / " << std::endl;
	file << "    /=========\\        __  __                        /_/     _" << std::endl;
	file << "    /  *   *  \\        \\ \\/ /        /\\  /\\    __ _  ____  | | " << std::endl;
	file << "  i/ O   i   O \\i       \\  /   __   /  \\/  \\  / _` |/ ___\\ |_| " << std::endl;
	file << "  /=============\\       /  \\  |__| / /\\  /\\ \\| (_| |\\___ \\  _ " << std::endl;
	file << "  /  O   i   O  \\      /_/\\_\\      \\ \\ \\/ / / \\__,_|\\____/ |_| " << std::endl;
	file << "i/ *   O   O   * \\i " << std::endl;
	file << "/=================\\ " << std::endl;
	file << "       |___| " << std::endl;
	file.close();
}
