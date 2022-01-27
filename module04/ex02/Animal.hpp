#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
	std::string	_type;
public:
	AAnimal();
	AAnimal(AAnimal const & src);
	AAnimal & operator=(AAnimal const & rhs);
	virtual ~AAnimal();

	virtual void		makeSound(void) const = 0;
	std::string const & getType(void) const;
};

#endif
