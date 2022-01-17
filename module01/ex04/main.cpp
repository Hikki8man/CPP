#include <iostream>
#include <fstream>

static void	findAndReplace(std::string& line, std::string toFind, std::string sub)
{
	std::size_t	pos = line.find(toFind);

	while (pos != std::string::npos)
	{
		line.erase(pos, toFind.length());
		line.insert(pos, sub);
		pos = line.find(toFind);
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

	std::string		outFilename = av[1];
	outFilename += ".replace";
	std::ofstream	outFile(outFilename);

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

	return 0;
}