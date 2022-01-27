#include <iostream>
#include <fstream>
#include <string>

static void	findAndReplace(std::string& line, std::string toFind, std::string sub)
{
	std::size_t	pos = 0;

	pos = line.find(toFind, pos);

	while (pos != std::string::npos)
	{
		line.erase(pos, toFind.length());
		line.insert(pos, sub);
		pos += sub.length();
		pos = line.find(toFind, pos);
	}
}

int	main(int ac, char **av)
{
	if (ac != 4 || !*av[1] || !*av[2] || !*av[3]) {
		std::cerr << "Error: wrong arguments." << std::endl;
		return 1;
	}

	std::ifstream	inFile(av[1]);
	std::string		line;

	if (inFile.good() == false) {
		std::cerr << "Error: file doesn't exist." << std::endl;
		return 2;
	}

	std::ofstream	outFile(std::string(av[1]) + ".replace");

	if (outFile.good() == false) {
		std::cerr << "Error: file not good." << std::endl;
		return 2;
	}

	while (true)
	{
		std::getline(inFile, line);
		findAndReplace(line, av[2], av[3]);
		outFile << line;
		if (inFile.eof())
			break ;
		else
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();

	return 0;
}