#include "Karen.hpp"

int	main(int ac, char **av)
{
	if (ac == 1 || ac > 2)
		return 1;

	Karen karen;

	karen.complain(av[1]);

	return 0;
}