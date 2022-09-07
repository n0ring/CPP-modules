#include "Contact.hpp"

Contact::Contact( void )
{
	this->_index = -1;
	this->_max_len = 0;
	// std::cout << " Contact contructor called" << std::endl;
}

Contact::~Contact( void )
{
	// std::cout << "Contact destructor called" << std::endl;
}

void	Contact::show_data( std::string s )
{
	if ( s.length() > 10 )
	{
		s.resize(10);
		s[9] = '.';
	}
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << s << "|";
}

int		Contact::get_contact_index( void ) const
{
	return (this->_index);
}

void	Contact::show_contact_for_search( void )
{
	std::cout << "|";
	
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << this->_index << "|";
	show_data(this->_first_name);
	show_data(this->_last_name);
	show_data(this->_nickname);
	std::cout << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	return ;
}

void	Contact::get_data_from_user(std::string msg, std::string *field_to_set)
{
	std::string	input;

	while (1)
	{
		std::cout << YELLOW << msg << RESET << std::endl;
		std::getline(std::cin, input);
		if (input.length())
			break ;
	}
	if ((int) input.length() > this->_max_len)
		this->_max_len = input.length();
	*field_to_set = input;
}

void	Contact::set_new_data( int index )
{
	this->get_data_from_user("Enter first name", &(this->_first_name));
	this->get_data_from_user("Enter last name", &(this->_last_name));
	this->get_data_from_user("Enter nickname", &(this->_nickname));
	this->get_data_from_user("Enter phone number", &(this->_phone_number));
	this->get_data_from_user("Enter darkest secret", &(this->_darkest_secret));
	this->_index = index;
}

void	Contact::show_line_info(std::string fieldname, std::string value) const
{
	std::cout << std::setfill(' ') << std::left << GREEN;
	std::cout << std::setw(14) << fieldname << ": " << RESET;
	std::cout << std::right << std::setw(this->_max_len + 1);
	std::cout << value << std::endl;
}

void	Contact::show_full_info( void ) const
{
	this->show_line_info("First name", this->_first_name);
	this->show_line_info("Last name", this->_last_name);
	this->show_line_info("Nickname", this->_nickname);
	this->show_line_info("Phone number", this->_phone_number);
	this->show_line_info("Darkest secret", this->_darkest_secret);
}

