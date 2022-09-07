#include <iostream>
#include "iter.hpp"

int main( void )
{

	int arr_int[] = {1, 2, 3};
	float arr_float[] = {1.1f, 2.2f, 3.333333f};
	iter(arr_int, 3, print);
	iter(arr_float, 3, print);
	return (0);
}