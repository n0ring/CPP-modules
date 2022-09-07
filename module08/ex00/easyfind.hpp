#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stdexcept>


template<typename T>
typename T::iterator	easyfind(T &container, int el)
{
	typename T::iterator res;
	
	res = std::find(container.begin(), container.end(), el);
	if (res == container.end())
		throw std::out_of_range("value is not found");
	return (res);
}

#endif