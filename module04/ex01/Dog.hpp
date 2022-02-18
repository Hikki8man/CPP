#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const & src);
	Dog & operator=(Dog const & rhs);
	~Dog();

	void	makeSound(void) const;
	void 	printIdeas(void) const;
	void	addIdea(std::string const & idea);

protected:
	Brain *_brain;
};

#endif
