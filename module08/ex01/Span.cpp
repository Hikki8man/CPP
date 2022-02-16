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
		this->_size = rhs._size;
		this->_v = rhs._v;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int n) {
	if (_v.size() == _size) {
		throw Span::VectorFullException();
	}
	_v.push_back(n);
}

uint	Span::shortestSpan() {
	if (_v.empty() || _v.size() == 1)
		throw Span::NoSpanException();
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
		throw Span::NoSpanException();
	return *std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end());
}

void	Span::generate() {
	std::srand(time(NULL));
	std::generate_n(std::back_inserter(_v), _size, std::rand);//TODO REDO // _v.resize(_size);
}

/*
** --------------------------------- EXCEPTIONS ----------------------------------
*/

char const * Span::VectorFullException::what() const throw() {
	return "Vector is already full !";
}

char const * Span::NoSpanException::what() const throw() {
	return "No span can be found !";
}


/* ************************************************************************** */