#include "Fixed.hpp"

int const Fixed::_bits = 8;

/*----------Constructor----------*/

Fixed::Fixed() : _n(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::Fixed(int const n) : _n(n << _bits)
{
}

Fixed::Fixed(float const n) : _n(std::roundf(n * (1 << _bits)))
{
}

/*----------Member functions----------*/

int		Fixed::getRawBits(void) const
{
	return this->_n;
}

void	Fixed::setRawBits(int const raw)
{
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

/*----------Operator overload----------*/

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	
	return o;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	this->_n = rhs._n;

	return *this;
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	if (this->_n > rhs._n)
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->_n >= rhs._n)
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	if (this->_n < rhs._n)
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	if (this->_n <= rhs._n)
		return true;
	return false;
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	if (this->_n == rhs._n)
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	if (this->_n != rhs._n)
		return true;
	return false;
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	return Fixed(this->_n + rhs._n);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	return Fixed(this->_n - rhs._n);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	return Fixed(this->_n * rhs._n);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	return Fixed(this->_n / rhs._n);
}

