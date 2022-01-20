#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_n;
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

	Fixed &	operator=(Fixed const & rhs);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
