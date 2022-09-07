#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	int	k;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		k = 0;
		while (argv[i][k])
		{
			std::cout << (char) toupper(argv[i][k]);
			k++;
		}
	}
	std::cout << std::endl;
	return (0);
}