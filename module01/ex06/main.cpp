#include "Karen.hpp"

int	main( int argc, char **argv )
{
	Karen	K;

	if (argc == 1)
	{
		std::cout << "Something wrong! She never silent!" << std::endl;
		return (1);
	}
	K.complain(std::string(argv[1]));
}