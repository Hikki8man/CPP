#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
public:

	Cat();
	Cat(Cat const & src);
	~Cat();

	Cat & operator=(Cat const & rhs);

	void	makeSound(void) const;
	void 	printIdeas(void) const;
	Brain & getBrain();

private:
	Brain *_brain;
};

#endif
