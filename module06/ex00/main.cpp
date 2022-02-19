# include <iostream>
# include <iomanip>
# include <cmath>
# include <limits.h>

void displayChar(double nb) {

	std::cout << "char: ";

	if (std::isprint(nb))
		std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "Non diplayable" << std::endl;
}

void diplayInt(double nb, std::string const & s) {

	std::cout << "int: ";

	if (s.compare("nan") == 0 || nb < INT_MIN || nb > INT_MAX)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << static_cast<int>(nb) << std::endl;
}

void displayFloat(double nb) {

	std::cout << "float: ";

	std::cout << static_cast<float>(nb) << ((nb == static_cast<int>(nb)) ? ".0" : "") << "f" << std::endl;
}

void displayDouble(double nb) {

	std::cout << "double: ";

	std::cout << nb << ((nb == static_cast<long long>(nb)) ? ".0" : "") << std::endl;;
}

int	main(int ac, char **av)
{
	if (ac != 2) return 1;

	double nb;
	if (std::isprint(av[1][0]) && !std::isdigit(av[1][0]) && !av[1][1])
		nb = av[1][0];
	else
		nb = atof(av[1]);
	
	displayChar(nb);
	diplayInt(nb, av[1]);
	displayFloat(nb);
	displayDouble(nb);
	
	return 0;

}