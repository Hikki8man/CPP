#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie z1("Henry");
	Zombie *z2 = newZombie("Loic");

	z1.announce();
	z2->announce();

	delete z2;
	randomChump("Pat");

	return 0;
}