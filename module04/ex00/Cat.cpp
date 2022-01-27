#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "A Cat has been created" << std::endl;
}

Cat::Cat(Cat const & src)
{
	std::cout << "A Cat has been copied" << std::endl;
	*this = src;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;

	return *this;
}


Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "*Miaou*" << std::endl;
}
