#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string	_name;
	int			_hp;
	int			_energy;
	int			_attackDamage;
	ClapTrap();

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	virtual ~ClapTrap();

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap & operator=(ClapTrap const & rhs);
};

#endif