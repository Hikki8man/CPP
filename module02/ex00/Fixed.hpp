#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int			_n;
	static int	_bits;
public:
	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed &	operator=(Fixed const & rhs);
};

#endif
