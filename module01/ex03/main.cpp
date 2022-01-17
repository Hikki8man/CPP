#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon club("crude spiked club");

	HumanA bob("Bob", club);//!*segf if NULL*!
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	club.setType("crude spiked club");

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();

	return 0;
}