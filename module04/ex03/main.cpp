#include "MateriaSource.hpp"
#include "Character.hpp"


int main()
{
	MateriaSource src;

	src.learnMateria(new Ice());
	src.learnMateria(new Cure());

	AMateria* materia = src.createMateria("Flame");
	materia = src.createMateria("ice");

	Character nanard("Bernard");
	Character bob("Bob");

	nanard.use(0, bob);

	nanard.equip(materia);

	nanard.use(0, bob);

	AMateria* cure = src.createMateria("cure");

	nanard.equip(cure);

	nanard.use(1, bob);


	AMateria* m = new Ice();
	AMateria* m2 = new Cure();
	AMateria* m3 = new Cure();

	nanard.equip(m);
	nanard.equip(m2);
	nanard.equip(m3);
	delete m3;

	nanard.use(3, bob);
	nanard.unequip(3);
	nanard.use(3, bob);
	delete(m2);

	return 0;
}