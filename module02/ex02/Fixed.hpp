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

	static Fixed & min(Fixed & lhs, Fixed & rhs);
	static Fixed const & min(Fixed const & lhs, Fixed const & rhs);
	static Fixed & max(Fixed & lhs, Fixed & rhs);
	static Fixed const & max(Fixed const & lhs, Fixed const & rhs);

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
