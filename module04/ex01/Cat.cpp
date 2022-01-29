#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "A Cat has been created" << std::endl;
	this->_brain = new Brain();
	this->_brain->addIdeas("I want to eat a fish !");
	this->_brain->addIdeas("I want to kill this human !");
}

Cat::Cat(Cat const & src)
{
	std::cout << "A Cat has been copied" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Cat & Cat::operator=(Cat const & rhs)
{
	*this->_brain = *rhs._brain;
	this->_type = rhs._type;

	return *this;
}


Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "*Miaou*" << std::endl;
}

void Cat::printIdeas(void) const
{
	int i = 0;

	while (i < 100 && this->_brain->getIdeas(i) != "")
	{
		std::cout << "[ " << i + 1 << " ] " << this->_brain->getIdeas(i) << std::endl;
		i++;
	}
}

Brain & Cat::getBrain()
{
	return *this->_brain;
}