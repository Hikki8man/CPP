#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon*		_Weapon;
public:
	HumanB(const std::string &name);
	~HumanB();

	void	attack(void) const;
	void	setWeapon(Weapon &weapon);
};
