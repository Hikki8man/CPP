#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const & src);
	~Intern();

	Intern & operator=(Intern const & rhs);

	Form* makeForm(std::string const & name, std::string const & target);

	class FormUnkownException : public std::exception
	{
		virtual char const * what() const throw()
		{
			return "Form type is unknown !";
		} 
	};

private:
	static std::string const _formKnown[3];

	int getFormType(std::string const & type) const;
};

#endif