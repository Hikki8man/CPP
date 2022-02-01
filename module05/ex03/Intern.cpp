# include "Intern.hpp"

std::string const Intern::_formKnown[3] =  {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

/* CONSTRUCTOR */

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

/* DESTRUCTOR */

Intern::~Intern()
{
}

/* OPERATOR OVERLOAD */

Intern & Intern::operator=(Intern const & rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return *this;
}

/* METHOD */

int	Intern::getFormType(std::string const & type) const
{
	for (int i = 0; i < 3; i++)
	{
		if (type == _formKnown[i])
			return i;
	}
	throw Intern::FormUnkownException();
}

Form * Intern::makeForm(std::string const & name, std::string const & target)
{
	int type;
	try
	{
		type = getFormType(name);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return NULL;
	}
	
	Form *f;

	switch (type)
	{
		case 0 :
			f =  new ShrubberyCreationForm(target);
			break ;
		case 1 :
			f = new RobotomyRequestForm(target);
			break ;
		case 2 :
			f = new PresidentialPardonForm(target);
			break ;
	}
	std::cout << "Intern creates " << name << std::endl;
	return f;
}