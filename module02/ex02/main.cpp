#include "Fixed.hpp"

int main(void)
{
	{
		Fixed a;
		Fixed const b(10);
		Fixed const c(42.42f);
		Fixed const d(b);

		a = Fixed(1234.4321f);
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	
	std::cout << std::endl;

	{
		Fixed a(0.5f), b(2);

		if (a <= b)
			std::cout << a << " is superior or equal to " << b << std::endl;
		Fixed c;

		std::cout << "c = " << c.getRawBits() << std::endl;

		std::cout << "c = " << c.getRawBits() << std::endl;
		c = a + b;
		std::cout << "a + b = " << (a + b) << std::endl;
		std::cout << "c = " << c << std::endl;
	}

	std::cout << std::endl;

	{
		Fixed a;
		Fixed b(Fixed(5.05f) * Fixed(2));
		Fixed c(1);

		std::cout << a << std::endl;
		// std::cout << a + c << std::endl;
		std::cout << ++a << std::endl;
		// std::cout << "raw bit = " << a.getRawBits() << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;
		
		std::cout << Fixed::max(a, b) << std::endl;
	}

	return 0;
}