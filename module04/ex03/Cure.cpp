#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure( const Cure & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	this->_type = rhs._type;
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria*	Cure::clone() const
{
	return new Cure();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */