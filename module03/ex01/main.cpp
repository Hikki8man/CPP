#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	// ClapTrap clap("jesus");
	ScavTrap scav("Marlo");
	// ScavTrap scav(scav2);

	scav.attack("le sol");
	scav.takeDamage(90);
	scav.beRepaired(50)
	scav.guardGate();
	// scav.beRepaired(10);
	// scav2.beRepaired(2);

	return 0;
}