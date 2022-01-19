#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _Weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void) const
{
	if (!this->_Weapon)
		std::cout << this->_name << " attacks with his fists" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_Weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
}
