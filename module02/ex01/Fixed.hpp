#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_n;
		static const int bits = 8;

	public:
				Fixed( void );
				Fixed( int const n );
				Fixed( float const n );
				Fixed( Fixed const & src );
				~Fixed( void );

		Fixed	&operator=( Fixed const &rhs );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;


};

std::ostream	&operator<<(std::ostream & o, Fixed const & i);

#endif