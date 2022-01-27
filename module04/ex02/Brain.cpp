#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() : _ideas()
{
	std::cout << "Brain hase been created" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain dead" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	int i = 0;

	while (rhs._ideas[i] != "")
	{
		this->_ideas[i] = rhs._ideas[i];
		i++;
	}


	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	Brain::addIdeas(std::string const & idea)
{
	int i = 0;

	while (this->_ideas[i] != "") {
		i++;
	}
	if (i == 100)
		std::cout << "Brain is full" << std::endl;
	else
		this->_ideas[i] = idea;
	
}

std::string const Brain::getIdeas(int n) const
{
	if (n >= 0 && n < 100)
		return this->_ideas[n];
	return "";
}


/* ************************************************************************** */