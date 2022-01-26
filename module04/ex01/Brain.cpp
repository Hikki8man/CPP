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
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	Brain::setIdeas(std::string const & idea)
{
	int i = 0;
	if (idea == "")
	{
		std::cout << "Not a good idea" << std::endl;
		return ;
	}
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