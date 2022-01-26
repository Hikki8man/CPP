#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string	_type;
public:
	Animal();
	Animal(Animal const & src);
	Animal & operator=(Animal const & rhs);
	virtual ~Animal();

	virtual void		makeSound(void) const;
	std::string const & getType(void) const;
};

#endif

