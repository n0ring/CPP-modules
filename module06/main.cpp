#include <iostream>
#include <ctype.h>

// 1-0
// f .

#define ALLOWED_CHARS "1234567890.f"

int	isStringValid(char *s)
{
	int			len				= std::string(s).length();
	int			char_int;
	std::string	allowed_chars	= std::string(ALLOWED_CHARS);

	for (int i = 0; i < len; i++)
	{
		char_int = static_cast<int>(s[i]);
		if (char_int < 32 || char_int > 127)
		{
			std::cout << "Not printable character" << std::endl;
			return (1);
		}
		if (allowed_chars.find(s[i]) == std::string::npos)
		{
			std::cout << "Not allowed character" << std::endl;
			return (1);
		}
	}
	if (len == 1)
		return (2);
	else
		return (3);
	return (0);
}

int	main( int argc, char **argv )
{
	(void) argv;
	if (argc != 2)
	{
		std::cout << "Incorrect params" << std::endl;
		return (1);
	}
	switch ((isStringValid(argv[1])))
	{
		case 1:
		return (1);
	case 2:
		std::cout << "character" << std::endl;
		break ;
	case 3:
		std::cout << "not char" << std::endl;
	default:
		break;
	}
	return (0);
}