#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		void	add_contact( void );

	public:
				PhoneBook( void );
				~PhoneBook( void );
		int		get_and_handle_input( void );
		void	search_cmd( void );
};

#endif