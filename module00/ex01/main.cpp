#include "PhoneBook.hpp"

int main( void )
{
	PhoneBook	book;

	while (!book.get_and_handle_input())
		;
	return (0);
}