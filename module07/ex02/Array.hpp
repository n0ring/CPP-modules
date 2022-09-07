#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
	private:
		T	*array;
		int	array_size;
	public:
		Array( void )
		{
			array_size = 0;
			this->array = new T[0];
		};
		Array( int n )
		{
			array_size = n;
			this->array = new T[n];
		};
		Array(Array const &src)
		{
			this->array_size = src.array_size;
			this->array = new T[src.array_size];
			for (int i = 0; i < src.array_size; i++)
				this->array[i] = src[i];
		}
		Array &operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				delete[] this->array;
				this->array_size = rhs.array_size;
				this->array = new T[rhs.array_size];
				for (int i = 0; i < rhs.array_size; i++)
					this->array[i] = rhs[i];
			}
			return (*this);
		}
		~Array( void )
		{
			if (this->array)
				delete[] array;
		}
		int size( void ) const
		{
			return (this->array_size);
		}
	class OutOfArray : public std::exception
	{
		const char* what( void ) const throw()
		{
			return ("Index out of bounds");
		}
	};

T	&operator[]( int i)
{
	if (i >= this->size() || i < 0)
	{
		throw Array::OutOfArray();
	}
	return *(this->array + i);
}

const T	operator[]( int i) const
{
	if (i >= this->size() || i < 0)
	{
		throw Array::OutOfArray();
	}
	return *(this->array + i);
}
};

template <typename T>
std::ostream	&operator<<(std::ostream &o, Array<T> const &obj)
{
	o << "Array: " << std::endl;
	for (int i = 0; i < obj.size(); i++)
		o << obj[i] << std::endl;
	return (o);
}


#endif // !ARRAY_HPP
