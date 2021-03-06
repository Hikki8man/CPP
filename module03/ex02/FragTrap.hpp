#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
protected:
	FragTrap();
public:
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
	~FragTrap();

	void	highFivesGuys(void) const;
};

#endif
