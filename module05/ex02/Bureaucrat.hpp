#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const _name;
	size_t	_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string const & name, size_t grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const & rhs);

	class GradeTooLowException : public std::exception
	{
		public:
			virtual char const * what() const throw()
			{
				return "Grade is too low";
			}
	};
	class GradeTooHighException : public std::exception
	{
		public:
			virtual char const  * what() const throw()
			{
				return "Grade is too high";
			}
	};
	std::string	getName() const;
	size_t		getGrade() const;
	

	void		rankUp();
	void		rankDown();
	void		signForm(Form & form);
	void		executeForm(Form const & form);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
