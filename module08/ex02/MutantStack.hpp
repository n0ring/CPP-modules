#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>
#include <deque>
#include <iostream>
#include <exception>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		MutantStack( ) : std::stack<T>() {};
		~MutantStack( void ) {};
		MutantStack(MutantStack const &src) : std::stack<T>(src)
		{
		}
		MutantStack &operator=(MutantStack const &rhs)
		{
			*this = rhs;
			return (*this);
		}

		iterator					begin() { return this->std::stack<T>::c.begin(); }
		iterator					end() { return this->std::stack<T>::c.end(); }
		reverse_iterator			rbegin() { return this->std::stack<T>::c.rbegin(); }
		reverse_iterator			rend() { return this->std::stack<T>::c.rend(); }
		const_iterator				cbegin() { return this->std::stack<T>::c.cbegin(); }
		const_iterator				cend() { return this->std::stack<T>::c.cend(); }
		const_reverse_iterator		crbegin() { return this->std::stack<T>::c.crbegin(); }
		const_reverse_iterator		crend() { return this->std::stack<T>::c.crend(); }
};


#endif