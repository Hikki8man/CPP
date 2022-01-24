#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap constructor by copy called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_energy && this->_hp > 0)
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackDamage << " points of damages !" << std::endl;
	}
	else if (!this->_energy)
		std::cout << "ClapTrap " << this->_name << " is out of energy !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		this->_hp -= amount;
		std::cout << "ClapTrap " << this->_name << " got attacked and took " << amount << " of damage and have "
		<< this->_hp << " left !" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy && this->_hp > 0)
	{
		this->_energy--;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " repaired itself with " << amount
		<< " points and now have " << this->_hp << " hp and " << this->_energy << " energy points left" << std::endl;
	}
	else if (!this->_energy)
		std::cout << "ClapTrap " << this->_name << " is out of energy !" << std::endl;
}
