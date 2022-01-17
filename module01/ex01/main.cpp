#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	int	nb = 10;
	Zombie*	horde = zombieHorde(nb, "Zombie");

	for (int i = 0; i < nb; i++) {
		std::cout << i + 1 << ") ";
		horde[i].announce();
	}

	delete [] horde;

	return 0;
}
