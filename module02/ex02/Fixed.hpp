#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_rawNumber;
	static const int	_bits;
public:
	Fixed();
	Fixed(Fixed const & src);
	Fixed(int const n);
	Fixed(float const n);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	// static Fixed & min(Fixed const & a, Fixed const & b);
	// static Fixed & min(Fixed const & rhs);
	// static Fixed & max(Fixed const & a, Fixed const & b);
	// static Fixed & max(Fixed const & rhs);

	bool	operator>(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;

	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;
	Fixed &	operator++();
	Fixed	operator++(int);
	Fixed &	operator--();
	Fixed	operator--(int);

	Fixed &	operator=(Fixed const & rhs);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
