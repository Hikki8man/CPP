#ifndef MATERIALSOURCE_HPP
# define MATERIALSOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource
{
private:
	static const int _maxMateria = 4;
	AMateria *_materiaT[_maxMateria];
public:
	MateriaSource();
	MateriaSource(MateriaSource const & src);
	~MateriaSource();

	MateriaSource& operator=(MateriaSource const & rhs);

	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif