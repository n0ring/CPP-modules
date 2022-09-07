#include "easyfind.hpp"

int main( void )
{
	{
		std::vector<int> vec1;
		std::vector<int>::iterator  it   = vec1.begin();
		std::vector<int>::iterator  ite  = vec1.end();
		std::vector<int>::iterator  res;

		vec1.push_back(1);
		vec1.push_back(2);
		vec1.push_back(3);
		std::cout << vec1[10] << std::endl;
		for (; it != ite; it++)
			std::cout << *it << std::endl;

		res = easyfind(vec1, 2);
		std::cout << "res of easyfind from vector: " << *res << std::endl;
		try
		{
			easyfind(vec1, 42);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::list<int>			list1;
		std::list<int>::iterator  res;
		list1.push_back(42);
		list1.push_back(21);
		res = easyfind(list1, 42);
		std::cout << "res of easyfind from list: " << *res << std::endl;
		try
		{
			easyfind(list1, 4221);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	return (0);
}