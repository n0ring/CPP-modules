#include <iostream>
#include <fstream>

void	replace_str(std::ifstream &input, std::ofstream &output,
					char *s1, char *s2)
{
	size_t		find_res;
	size_t		start_pos;
	size_t		s1_len;
	std::string	line;

	s1_len = std::string(s1).length();
	while (std::getline(input, line))
	{
		start_pos = 0;
		while ((find_res = line.find(s1, start_pos)) != std::string::npos )
		{
			output << line.substr(start_pos, find_res - start_pos);
			output << s2;
			start_pos = find_res + s1_len;
		}
		output << line.substr(start_pos);
		output << std::endl;
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	input_file;
	std::ofstream	output_file;

	if (argc != 4)
	{
		std::cout << "Wrong number of args" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0')
	{
		std::cout << "Incorrect params" << std::endl;
		return (1);
	}
	input_file.open(argv[1], std::ios::in);
	output_file.open(std::string(argv[1]) + ".replace", std::ios::out);
	if (!input_file.is_open() || !output_file.is_open())
	{
		std::cout << "File open error" << std::endl;
		return (1);
	}
	replace_str(input_file, output_file, argv[2], argv[3]);
	output_file.close();
	input_file.close();
	return (0);
}