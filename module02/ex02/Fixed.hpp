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
			Fixed( int const );
			Fixed( float const n );
			Fixed( Fixed const & src);
			~Fixed( void );

			Fixed	&operator=( Fixed const &rhs );
			Fixed	operator+( Fixed const &rhs );
			Fixed	operator-( Fixed const &rhs );
			Fixed	operator*( Fixed const &rhs );
			Fixed	operator/( Fixed const &rhs );
			Fixed	&operator++( void );
			Fixed	&operator--( void );
			Fixed	operator++( int );
			Fixed	operator--( int );
			int		operator>( Fixed const &rhs );
			int		operator<( Fixed const &rhs );
			int		operator>=( Fixed const &rhs );
			int		operator<=( Fixed const &rhs );
			int		operator==( Fixed const &rhs );
			int		operator!=( Fixed const &rhs );

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
			int		toInt( void ) const;
			float	toFloat( void ) const;

	static	Fixed	&min(Fixed &a, Fixed &b);
	static	Fixed const	&min(Fixed const &a, Fixed const &b);
	static	Fixed	&max(Fixed &a, Fixed &b);
	static	Fixed const	&max(Fixed const &a, Fixed const &b);

};

std::ostream	&operator<<(std::ostream & o, Fixed const & i);

#endif