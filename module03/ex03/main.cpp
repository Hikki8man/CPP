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

std::cout << "-------------------" << std::endl;

	DiamondTrap b(a);

	b.attack("un bambou");
	b.takeDamage(40);
	b.beRepaired(10);
	b.guardGate();
	b.highFivesGuys();
	b.whoAmI();


	return 0;
}