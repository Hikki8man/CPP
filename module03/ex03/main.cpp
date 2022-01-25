#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("George");


	a.attack("a witch");
	a.takeDamage(40);
	a.beRepaired(10);
	a.guardGate();
	a.highFivesGuys();
	a.whoAmI();


	return 0;
}