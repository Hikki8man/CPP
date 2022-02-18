#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	
	// AAnimal animal(); Cant do
	AAnimal* t[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			t[i] = new Cat();
		else
			t[i] = new Dog();
	}

	for (int i = 0; i < 10; i++)
	{
		t[i]->makeSound();
	}

	for (int i = 0; i < 10; i++)
	{
		delete t[i];
	}
	Cat a;

	Cat b(a);

	a.addIdea("oui");

	a.printIdeas();
	b.printIdeas();

}