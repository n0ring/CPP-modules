#include "Karen.hpp"

int	main( void )
{
	Karen	K;

	std::cout << "[DEBUG]" << std::endl;
	K.complain("debug");
	std::cout << "[INFO]" << std::endl;
	K.complain("info");
	std::cout << "[WARNING]" << std::endl;
	K.complain("warning");
	std::cout << "[ERROR]" << std::endl;
	K.complain("Error");
	std::cout << "[BAD ARGUMENT]" << std::endl;
	K.complain("bad arg");
}