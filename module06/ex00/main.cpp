#include <math.h>
#include <limits>
#include <float.h>
#include <iostream>

bool is_valid( std::string s)
{
	size_t		i				=	0;
	std::string	allowed_char	= "1234567890f.";

	if (s == "nan" || s == "nanf" || s == "-inff" || s == "+inff"
			|| s == "+inf" || s == "-inf")
		return(true);
	if (s[i] == '-' || s[i] == '+')
		i++;
	for (; i < s.length(); i++)
	{
		if (allowed_char.find(s[i]) ==  std::string::npos)
			return (false);
	}
	return (true);
}

void    print_char( long double n )
{
	char    c   = static_cast<char>(n);

	std::cout << "Char: ";
	if (n >= 0 && n <= 255)
	{
		if (isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void    print_int( long double n )
{
	std::cout << "Int: ";
	if (n <= INT_MAX && n >= INT_MIN)
		std::cout << static_cast<int>(n) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	print_float( long double n, std::string s )
{
	std::cout << "Float: ";
	if ( isnan(n) || isinf(n) )
	{
		if (s[0] == '+')
			std::cout << "+";
		std::cout << n << "f" << std::endl;
	}
	else if ( n >= -FLT_MAX && n <= FLT_MAX )
		std::cout << static_cast<float>(n) << "f" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	print_double( long double n, std::string s )
{
	std::cout << "Double: ";
	if ( isnan(n) || isinf(n) )
	{
		if (s[0] == '+')
			std::cout << "+";
		std::cout << n << std::endl;
	}
	else if (n >= -DBL_MAX && n <= DBL_MAX)
		std::cout << static_cast<double>(n) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

int main( int argc, char **argv)
{
	long double ld;
	if (argc != 2)
	{
		std::cout << "Usage: ./casts <arg>" << std::endl;
		return (1);
	}
	if (std::string(argv[1]).compare("NULL"))
	{
		if (is_valid(argv[1]))
			ld = std::stold(argv[1]);
		else
		{
			std::cout << "incorrect symbol" << std::endl;
			return (1);
		}
	}
	else
		ld = 0;
	std::cout << ld << std::endl;
	print_char(ld);
	print_int(ld);
	print_float(ld, argv[1]);
	print_double(ld, argv[1]);
	return (0);
}