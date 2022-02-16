#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "\033[0;33mDefault ScavTrap constructor called\033[0;37m" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\033[0;33mScavTrap constructor called\033[0;37m" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "\033[0;33mScavTrap constructor by copy called\033[0;37m" << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	ClapTrap::operator=(rhs);

	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[0;33mScavTrap destructor called\033[0;37m" << std::endl;
}


void	ScavTrap::attack(std::string const & target)
{
	if (this->_energy && this->_hp > 0)
	{
		this->_energy--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackDamage << " points of damages !" << std::endl;
	}
	else if (!this->_energy)
		std::cout << "ScavTrap " << this->_name << " is out of energy !" << std::endl;
}

void	ScavTrap::guardGate() const
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}