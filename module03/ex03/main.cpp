#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap pedro("Pedro");
	pedro.beRepaired(10);
	pedro.attack("a tree");
	pedro.takeDamage(40);

	FragTrap frag(pedro);
	frag.beRepaired(5);
	frag.highFivesGuys();

	return 0;
}