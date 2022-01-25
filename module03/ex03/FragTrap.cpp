#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "\033[0;32mDefault FragTrap constructor called\033[0;37m" << std::endl;

	this->_hp = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\033[0;32mFragTrap constructor called\033[0;37m" << std::endl;

	this->_hp = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "\033[0;32mFragTrap constructor by copy called\033[0;37m" << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);

	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[0;32mFragTrap destructor called\033[0;37m" << std::endl;
}


void	FragTrap::highFivesGuys(void) const
{
	std::cout << "Hey let's high fives guys !" << std::endl;
}