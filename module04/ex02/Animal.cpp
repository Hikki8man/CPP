#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "An ANIMAL has been created" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "An ANIMAL has been copied" << std::endl;
	*this = src;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	this->_type = rhs._type;

	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "ANIMAL destructor called" << std::endl;
}

std::string const & AAnimal::getType(void) const
{
	return this->_type;
}
