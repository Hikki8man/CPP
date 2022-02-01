#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("some form"), _gradeToSign(150), _gradeToExe(50)
{
}

Form::Form(std::string const & name, size_t gradeToSigned, size_t gradeToExe) : _name(name), _gradeToSign(gradeToSigned), _gradeToExe(gradeToExe), _signed(false)
{
	if (gradeToSigned < 1 || gradeToExe < 1)
		throw Form::GradeToHighException();
	else if (gradeToSigned > 150 || gradeToExe > 150)
		throw Form::GradeToLowException();
}

Form::Form(const Form & src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExe(src._gradeToExe)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		_signed = rhs._signed;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form name: " << i.getName() << " | Grade to be signed: " << i.getGradeToSign()
	<< " | Grade to execute: " << i.getGradeToExe() << " | Signed: " << i.getSignature();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void	Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > _gradeToSign)
		throw Form::GradeToLowException();
	else
		_signed = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Form::getName() const
{
	return _name;
}

size_t		Form::getGradeToSign() const
{
	return _gradeToSign;
}

size_t		Form::getGradeToExe() const
{
	return _gradeToExe;
}

size_t		Form::getSignature() const
{
	return _signed;
}



/* ************************************************************************** */