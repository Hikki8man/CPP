#include "Fixed.hpp"

int const Fixed::_bits = 8;

/*----------Constructor----------*/

Fixed::Fixed() : _rawNumber(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::Fixed(int const n) : _rawNumber(n << _bits)
{
}

Fixed::Fixed(float const n) : _rawNumber(std::roundf(n * (1 << _bits)))
{
}

/*----------Member functions----------*/

int		Fixed::getRawBits(void) const
{
	return this->_rawNumber;
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawNumber = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_rawNumber / (1 << this->_bits);
}

int		Fixed::toInt(void) const
{
	return this->_rawNumber >> this->_bits;
}

Fixed & Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed const & Fixed::min(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed & Fixed::max(Fixed & lhs, Fixed & rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}

Fixed const & Fixed::max(Fixed const & lhs, Fixed const & rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}

/*----------Operator overload----------*/

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	
	return o;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	this->_rawNumber = rhs._rawNumber;

	return *this;
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	if (this->_rawNumber > rhs._rawNumber)
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->_rawNumber >= rhs._rawNumber)
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	if (this->_rawNumber < rhs._rawNumber)
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	if (this->_rawNumber <= rhs._rawNumber)
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	if (this->_rawNumber == rhs._rawNumber)
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	if (this->_rawNumber != rhs._rawNumber)
		return true;
	return false;
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed &	Fixed::operator++()
{
	this->_rawNumber++;
	
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	
	return tmp;
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed &	Fixed::operator--()
{
	this->_rawNumber--;
	
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	
	return tmp;
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

