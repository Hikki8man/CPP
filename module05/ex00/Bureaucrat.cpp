#include "Bureaucrat.hpp"

/* CONSTRUCTOR */

Bureaucrat::Bureaucrat() : _name("Boris"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;

}

Bureaucrat::Bureaucrat(Bureaucrat const & src)  : _name(src.getName())
{
	*this = src;
}

/* DESTRUCTOR */

Bureaucrat::~Bureaucrat()
{
}

/* OPERATOR OVERLOAD */

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs._grade;
	
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}

/* ACCESSOR */

std::string	Bureaucrat::getName() const
{
	return _name;
}

int			Bureaucrat::getGrade() const
{
	return _grade;
}

/* METHOD */

void		Bureaucrat::rankUp()
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void		Bureaucrat::rankDown()
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	else
		_grade++;
}
