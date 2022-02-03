# include <iostream>
# include <iomanip>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::cout << av[1] << std::endl;
		double d;
		if (isprint(av[1][0]) && !av[1][1])
			d = av[1][0];
		else
			d = std::atof(av[1]);
		char c = static_cast<char>(d);
		float f = static_cast<float>(d);
		int	i = static_cast<int>(f);

		std::cout << "char: ";

		if (isprint(c))
			std::cout << c << std::endl;
		else
			std::cout << "Non displayable" << std::endl;

		std::cout << "int: " << i<< std::endl;

		std::cout << "float: " << f;
		if (f == static_cast<float>(i))
			std::cout << ".0";
		std::cout << "f" << std::endl;

		std::cout << "double: " << d;
		long long ll = static_cast<long long>(d);
		if (static_cast<double>(ll) == d)
			std::cout << ".0";
		std::cout << std::endl;
		
		return 0;
	}
	return 1;
}