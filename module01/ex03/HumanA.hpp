#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weapon;
public:
	HumanA(const std::string &name, Weapon& weapon);
	~HumanA();

	void	attack(void) const;
};

#endif
