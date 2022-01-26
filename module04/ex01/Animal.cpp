#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An Animal has been created" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "An Animal has been copied" << std::endl;
	*this = src;
}

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs._type;

	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "*Random animal souds*" << std::endl;
}

std::string const & Animal::getType(void) const
{
	return this->_type;
}
