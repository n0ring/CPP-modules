#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */

class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		int			_index;
		int			_max_len;

		void		show_data( std::string );

	public:
		Contact( void );
		~Contact( void );
		void	show_contact_for_search( void );
		int		get_contact_index( void ) const;
		void	set_new_data ( int );
		void	get_data_from_user( std::string, std::string *);
		void	show_full_info( void ) const;
		void	show_line_info( std::string, std::string ) const;
};

#endif