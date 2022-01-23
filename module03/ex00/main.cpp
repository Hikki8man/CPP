#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("clap");
	ClapTrap trap(clap);

	clap.attack("plop");
	clap.takeDamage(10);
	clap.beRepaired(10);
	clap.beRepaired(10);
	clap.attack("dsa");
	return 0;
}