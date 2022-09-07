#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <exception>

class Span
{
private:
	std::vector<int>	_vec;
	unsigned long		_size;
	
public:
			Span( void );
			Span( unsigned int n );
			Span(Span const &src);
			Span &operator=(Span const &rhs);
			~Span();
	void	size(void); // delete
	void	show(void); // delete
	void	addNumber( int );
	void	addLotNumbers( std::vector<int>::iterator, std::vector<int>::iterator );
	int		longestSpan( void );

	int		shortestSpan( void );

	
	class NoElementsForSpan : public std::exception
	{
		public:
			const char	*what( void ) const throw();
	};

		class TooMuchElementsToInsert : public std::exception
	{
		public:
			const char	*what( void ) const throw();
	};
};


#endif