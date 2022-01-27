#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "A Dog has been created" << std::endl;
}

Dog::Dog(Dog const & src)
{
	std::cout << "A Dog has been copied" << std::endl;
	*this = src;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;

	return *this;
}


Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "*Waf*" << std::endl;
}
