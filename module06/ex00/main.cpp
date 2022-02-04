# include <iostream>
# include <iomanip>
# include <math.h>
# include <limits>

void displayChar(double nb) {

	std::cout << "char: ";

	if (isprint(nb))
		std::cout << static_cast<char>(nb) << std::endl;
	else if (isnan(nb) || isinf(nb))
		std::cout << "Impossible" << std::endl;
	else
		std::cout << "Non diplayable" << std::endl;
}

void diplayInt(double nb) {

	std::cout << "int: ";

	if (isnan(nb) || isinf(nb) || nb < INT_MIN || nb > INT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(nb) << std::endl;
}

void displayFloat(double nb) {

	std::cout << "float: ";

	if (isnan(nb))
		std::cout << "nan";
	else if (isinf(nb))
		std::cout << ((nb < 0) ? "-" : "+") << "inf";
	else
		std::cout << nb << ((nb - static_cast<int>(nb) == 0) ? ".0" : "");

	std::cout << "f" << std::endl;
}

void displayDouble(double nb) {

	std::cout << "double: ";

	if (isnan(nb))
		std::cout << "nan";
	else if (isinf(nb))
		std::cout << ((nb < 0) ? "-" : "+") << "inf";
	else
		std::cout << nb << ((nb - static_cast<long long>(nb) == 0) ? ".0" : "");
	
	std::cout << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 2) return 1;

	double nb;
	if (isprint(av[1][0]) && !isdigit(av[1][0]) && !av[1][1])
		nb = av[1][0];
	else
		nb = std::atof(av[1]);
	
	displayChar(nb);
	diplayInt(nb);
	displayFloat(nb);
	displayDouble(nb);
	
	return 0;

}