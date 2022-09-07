#ifndef ITER_HPP
#define ITER_HPP


template<typename T>
void print(T el)
{
	std::cout << el << std::endl;
}

template<typename T, typename U>
void    iter(T *arr, U const arr_len, void(*f)(T))
{
	for (U i = 0; i < arr_len; i++)
	{
		f(arr[i]);
	}
}

#endif // !ITER_HPP