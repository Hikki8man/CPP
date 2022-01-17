#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	~Zombie();

	void		setName(std::string name);
	std::string	getName(void) const;
	void		announce(void) const;
};

#endif
