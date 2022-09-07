#include <cstdint>
#include <iostream>

typedef struct {
	int a;
	int b;
} Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main( void )
{
	uintptr_t   int_ptr;
	Data		d;
	Data		*c;

	d.a = 1;
	d.b = 3;
	std::cout << "pointer to data el: " << &d << std::endl;
	int_ptr = serialize(&d);
	c = deserialize(int_ptr);
	std::cout << "pointer after serialize and deserialize: "
		<< c << std::endl;
	std::cout << c->a << std::endl;
	std::cout << c->b << std::endl;
	return (0);
}