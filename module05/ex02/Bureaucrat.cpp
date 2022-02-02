#include "Bureaucrat.hpp"

/* CONSTRUCTOR */

Bureaucrat::Bureaucrat() : _name("Boris"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const& name, size_t grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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

size_t	Bureaucrat::getGrade() const
{
	return _grade;
}

/* METHOD */

void		Bureaucrat::rankUp()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void		Bureaucrat::rankDown()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(Form & form) const
{
	if (form.getSignature() == true)
	{
		std::cout << form.getName() << " is already signed." << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch(const Form::GradeToLowException& e)
	{
		std::cout << _name << " cannot sign because his " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form) const
{
	form.execute(*this);
}

