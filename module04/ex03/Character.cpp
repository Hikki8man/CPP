# include "Character.hpp"

/* CONSTRUTOR */

Character::Character() : _name("Jaina")
{
	for (int i = 0; i < _invSize; i++)
		_inv[i] = NULL;
}

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < _invSize; i++)
		_inv[i] = NULL;
}

Character::Character(Character const & src)
{
	*this = src;
}

/* DESTRUCTOR */

Character::~Character()
{
	for (int i = 0; i < _invSize; i++)
	{
		if (_inv[i] != NULL)
			delete _inv[i];
	}
}

/* OPERATOR OVERLOAD */

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < _invSize; i++)
	{
		if (this->_inv[i] != NULL)
			delete this->_inv[i];
		this->_inv[i] = rhs._inv[i];
	}
	return *this;
}

/* ACCESSOR */

std::string const & Character::getName(void) const
{
	return this->_name;
}

/* METHOD */

void	Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "You can't equip the void !" << std::endl;
		return ;
	}
	for (int i = 0; i < _invSize; i++)
	{
		if (_inv[i] == NULL)
		{
			_inv[i] = m;
			if (m->getType() == "ice")
				std::cout << this->_name << " is now able to throw ice bolts !" << std::endl;
			else
				std::cout << this->_name << " is now able to heal !" << std::endl;
			return ;
		}
	}
	std::cout << "Your inventary is full !" << std::endl;
}

void	Character::unequip(int idx)
{
	/*Save address before doing that*/
	if (idx >= 0 && idx < this->_invSize && this->_inv[idx] != NULL)
	{
		if (this->_inv[idx]->getType() == "ice")
			std::cout << this->_name << " just lost the ability to throw ice bolts." << std::endl;
		else
			std::cout << this->_name << " just lost the ability to heal." << std::endl;
		this->_inv[idx] = NULL;
		return ;
	}
	std::cout << "There is nothing at this slot." << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->_invSize && this->_inv[idx] != NULL)
	{
		this->_inv[idx]->use(target);
		return ;
	}
	std::cout << "There is nothing at this slot." << std::endl;
}