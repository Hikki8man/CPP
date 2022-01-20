#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed() : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const n) : _n(n << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) : _n(std::roundf(n * (1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
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

float	Fixed::toFloat(void) const
{
	return (float)this->_n / (1 << this->_bits);
}

int		Fixed::toInt(void) const
{
	return this->_n >> this->_bits;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation member called" << std::endl;
	this->_n = rhs._n;

	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}