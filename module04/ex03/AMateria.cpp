#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	this->_type = rhs._type;
	return *this;
}
/*
** --------------------------------- METHODS ----------------------------------
*/

void	AMateria::use(ICharacter& target)
{
	(void)target;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & AMateria::getType() const
{
	return this->_type;
}

/* ************************************************************************** */