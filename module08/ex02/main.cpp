#include "MutantStack.hpp"



// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite) {
//     std::cout << *it << std::endl;
// ++it; }
// std::stack<int> s(mstack); return 0;
// }

int main( void )
{
	MutantStack<int> a;



	a.push(42);
	a.push(21);
	a.push(221);
	a.push(442);

	std::cout << "--check top_pop_push--" << std::endl;
	std::cout << a.top() << std::endl;
	a.pop();
	std::cout << a.top() << std::endl;
	a.push(442);

	{
		std::cout << "--check iterators--" << std::endl;
		MutantStack<int>::iterator	it = a.begin();
		MutantStack<int>::iterator	ite = a.end();
		for ( ; it != ite; it++)
			std::cout << *it << std::endl;
	}
	{
		std::cout << "--check reverse iterators--" << std::endl;
		MutantStack<int>::reverse_iterator	it = a.rbegin();
		MutantStack<int>::reverse_iterator	ite = a.rend();
		for ( ; it != ite; it++)
			std::cout << *it << std::endl;
	}

	{
		std::cout << "--check const iterators--" << std::endl;
		MutantStack<int>::const_iterator	it = a.cbegin();
		MutantStack<int>::const_iterator	ite = a.cend();
		for ( ; it != ite; it++)
			std::cout << *it << std::endl;
	}
	{
		std::cout << "--check const reverse iterators--" << std::endl;
		MutantStack<int>::const_reverse_iterator	it = a.crbegin();
		MutantStack<int>::const_reverse_iterator	ite = a.crend();
		for ( ; it != ite; it++)
			std::cout << *it << std::endl;
	}


	return (0);
}