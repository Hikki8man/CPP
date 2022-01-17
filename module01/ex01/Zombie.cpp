#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << " got smashed by a shovel !" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName(void) const
{
	return (this->_name);
}
