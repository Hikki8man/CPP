#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Diamond_clap_name"), _name("Diamond")
{
	std::cout << "\033[0;34mDefault DiamondTrap constructor called\033[0;37m" << std::endl;
	 this->_hp = 100;
	 this->_energy = 50;
	 this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "\033[0;34mDiamondTrap constructor called\033[0;37m" << std::endl;
	 this->_hp = 100;
	 this->_energy = 50;
	 this->_attackDamage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[0;34mDiamond destructor called\033[0;37m" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	this->_name = rhs._name;

	return *this;
}

void	DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "Diamond name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << this->ClapTrap::_name << std::endl;
}
