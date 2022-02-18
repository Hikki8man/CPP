#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "A Dog has been created" << std::endl;
	this->_brain = new Brain();
	this->_brain->addIdeas("I want to play with my master !");
	this->_brain->addIdeas("I will chase the delivery guy and master will probably give me a treat !");
}

Dog::Dog(Dog const & src)
{
	std::cout << "A Dog has been copied" << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Dog & Dog::operator=(Dog const & rhs)
{
	*this->_brain = *rhs._brain;
	this->_type = rhs._type;

	return *this;
}


Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "*Waf*" << std::endl;
}

void Dog::printIdeas(void) const
{
	int i = 0;

	while (i < 100 && this->_brain->getIdeas(i) != "")
	{
		std::cout << "[ " << i + 1 << " ] " << this->_brain->getIdeas(i) << std::endl;
		i++;
	}
}

void	Dog::addIdea(std::string const & idea)
{
	this->_brain->addIdeas(idea);
}