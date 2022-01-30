#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
private:
	std::string const _name;
	int	_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const & rhs);

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() throw()
			{
				return "Grade is too low";
			}
	};
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() throw()
			{
				return "Grade is too high";
			}
	};


	std::string	getName() const;
	int			getGrade() const;
	void		rankUp();
	void		rankDown();
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
