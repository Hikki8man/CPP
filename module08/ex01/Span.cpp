#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(uint size) : _size(size)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Span const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int n) {
	if (_v.size() == _size) {
		throw std::exception();
	}
	_v.push_back(n);
}

uint	Span::shortestSpan() {
	if (_v.empty() || _v.size() == 1)
		throw std::exception();
	std::vector<int> v(_v);
	std::sort (v.begin(), v.end());
	uint shorty = abs(*v.begin() - *(v.begin() + 1));
	for (std::vector<int>::iterator it = v.begin() + 1; it != v.end() - 1; ++it) {
		if (static_cast<uint>(abs(*it - *(it + 1))) < shorty) {
			shorty = abs(*it - *(it + 1));
		}
	}
	return shorty;
}
uint	Span::longestSpan() {
	if (_v.empty() || _v.size() == 1)
		throw std::exception();
	return *std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */