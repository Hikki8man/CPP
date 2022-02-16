#include "MateriaSource.hpp"
#include "Character.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->use(0, *bob);

	Character jaina;

	jaina.equip(new Cure());

	jaina.use(0, *me);

	*me = jaina;

	me->use(1, *bob);
	me->unequip(0);
	jaina.use(0, *me);

	delete tmp;
	delete bob;
	delete me;
	delete src;
	return 0;
}