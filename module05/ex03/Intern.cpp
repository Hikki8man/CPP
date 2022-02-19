# include "Intern.hpp"

std::string const Intern::_formKnown[3] =  {"Shrubbery creation", "Robotomy request", "Presidential pardon"};

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
	
	std::cout << "Intern creates " << name << std::endl;

	switch (type)
	{
		case 0 : return new ShrubberyCreationForm(target);
		
		case 1 : return new RobotomyRequestForm(target);

		case 2 : return new PresidentialPardonForm(target);
	}
	return NULL;
}