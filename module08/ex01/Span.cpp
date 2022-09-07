#include "Span.hpp"

Span::Span( void ) : _size(0)
{
}

Span::Span( unsigned int n ) : _size(n)
{
}

Span::Span(Span const &src)
{
	*this = src;
}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->_vec = rhs._vec;
	}
	return (*this);
}

Span::~Span( void )
{
}

void Span::addNumber( int n )
{
	if (this->_vec.size() == this->_size)
		throw std::out_of_range("Span is full");
	this->_vec.push_back(n);
}

int	Span::shortestSpan( void )
{
	int							shortestSpan;
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite;

	if (this->_vec.size() < 2)
		throw NoElementsForSpan();
	sort(this->_vec.begin(), this->_vec.end());
	it = this->_vec.begin();
	ite = this->_vec.end();
	shortestSpan = *(it + 1) - *it;
	for (; (it + 1) != ite; it++ )
	{
		if ( *(it + 1) - *it < shortestSpan)
			shortestSpan = *(it + 1) - *it;
	}
	return ( shortestSpan );
}

int	Span::longestSpan( void )
{
	if (this->_vec.size() < 2)
		throw NoElementsForSpan();
	sort(this->_vec.begin(), this->_vec.end());
	return ( this->_vec.back() - this->_vec.front());
}

void	Span::addLotNumbers( std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (this->_vec.size() + std::distance(start, end) > this->_size)
		throw Span::TooMuchElementsToInsert();
	this->_vec.insert(this->_vec.begin(), start, end);
}

const char	*Span::NoElementsForSpan::what( void ) const throw()
{
	return ("There is no elements for span search");
}

const char	*Span::TooMuchElementsToInsert::what( void ) const throw()
{
	return ("Too Much Elements To Insert");
}

