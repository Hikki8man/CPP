#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("Marlo");

	scav.attack("le sol");
	scav.takeDamage(90);
	scav.beRepaired(50);
	scav.guardGate();

	return 0;
}