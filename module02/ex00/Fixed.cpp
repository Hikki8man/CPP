#include "Fixed.hpp"

int Fixed::_bits = 8;

Fixed::Fixed() : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBit member function called" << std::endl;
	return this->_n;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBit member function called" << std::endl;
	this->_n = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation member called" << std::endl;
	this->_n = rhs._n;

	return *this;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
