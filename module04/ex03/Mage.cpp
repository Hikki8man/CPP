# include "Mage.hpp"


/* CONSTRUTOR */

Mage::Mage() : _name("Jaina")
{
	for (int i = 0; i < _invSize; i++)
		_inv[i] = NULL;
}

Mage::Mage(std::string const & name) : _name(name)
{
	for (int i = 0; i < _invSize; i++)
		_inv[i] = NULL;
}

Mage::Mage(Mage const & src)
{
	*this = src;
}

/* DESTRUCTOR */

Mage::~Mage()
{
	for (int i = 0; i < _invSize; i++)
	{
		if (_inv[i] != NULL)
			delete _inv[i];
	}
}

/* OPERATOR OVERLOAD */

Mage & Mage::operator=(Mage const & rhs)
{
	//clone?
	this->_name = rhs._name;
	for (int i = 0; i < _invSize; i++)
		this->_inv[i] = rhs._inv[i];
	return *this;
}

/* ACCESSOR */

std::string const & Mage::getName(void) const
{
	return this->_name;
}

/* METHOD */

void	Mage::equip(AMateria* m)
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
			_inv[i] = m; //clone instead?
			if (m->getType() == "ice")
				std::cout << this->_name << " is now able to throw ice bolts !" << std::endl;
			else
				std::cout << this->_name << " is now able to heal !" << std::endl;
			return ;
		}
	}
	std::cout << "Your inventary is full !" << std::endl;
}

void	Mage::unequip(int idx)
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

void	Mage::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->_invSize && this->_inv[idx] != NULL)
	{
		this->_inv[idx]->use(target);
	}
}