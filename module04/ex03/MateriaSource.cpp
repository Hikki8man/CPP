# include "MateriaSource.hpp"

/* CONSTRUCTOR */

MateriaSource::MateriaSource()
{
	for (int i = 0; i < _maxMateria; i++)
		_materiaT[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

/* DESTRUCTOR */

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _maxMateria; i++)
		if (_materiaT[i])
			delete _materiaT[i];
}

/* OPERATOR OVERLOAD */

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0; i < _maxMateria; i++) {
		if (_materiaT[i]) {
			delete _materiaT[i];
		}
		_materiaT[i] = rhs._materiaT[i]->clone();
	}
	return *this;
}

/* METHOD */

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < _maxMateria; i++)
	{
		if (_materiaT[i] == NULL)
		{
			_materiaT[i] = m;
			return ;
		}
	}
	std::cout << "You can't learn more than " << _maxMateria << " materia !" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _maxMateria; i++)
	{
		if (_materiaT[i] && _materiaT[i]->getType() == type)
		{
			if (type == "ice")
				return new Ice();
			else
				return new Cure();
		}
	}
	std::cout << "type: " << type << " is unknown" << std::endl;
	return 0;
}