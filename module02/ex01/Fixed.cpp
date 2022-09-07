#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_n = 0;
}

Fixed::Fixed( int n )
{
	this->_n = n << this->bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const n )
{
	this->_n = (int) roundf(n * (1 << this->bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_n = rhs.getRawBits();
	return ( *this );
}

int		Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
}

int		Fixed::toInt( void ) const
{
	return (this->_n >> this->bits);
}

float	Fixed::toFloat( void ) const
{
	return ((float) this->_n / (1 << this->bits));
}

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}