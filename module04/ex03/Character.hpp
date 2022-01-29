#ifndef Character_HPP
# define Character_HPP

# include "ICharacter.hpp" 

class Character : public ICharacter
{
protected:
	std::string _name;
	static const int _invSize = 4;
	AMateria*	_inv[_invSize];

public:
	Character();
	Character(std::string const & name);
	Character(Character const & src);
	~Character();

	Character & operator=(Character const & rhs);

	using ICharacter::equip;
	std::string const & getName(void) const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
};

#endif