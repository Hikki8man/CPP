#ifndef MAGE_HPP
# define MAGE_HPP

# include "ICharacter.hpp" 

class Mage : public ICharacter
{
protected:
	std::string _name;
	static const int _invSize = 4;
	AMateria*	_inv[_invSize];

public:
	Mage();
	Mage(std::string const & name);
	Mage(Mage const & src);
	~Mage();

	Mage & operator=(Mage const & rhs); //todo : deep cpy

	std::string const & getName(void) const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
};

#endif