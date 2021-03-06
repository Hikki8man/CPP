#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 72, 45), _target("targetUnkown")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("Presidential Pardon", 72, 45), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
		Form::operator=(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	
	o << "Form name: " << i.getName() << " | Grade to be signed: " << i.getGradeToSign() << " | grade to be executed: " << i.getGradeToExe()
	<< " | Signed: " << i.getSignature() << " | Target: " << i.getTarget();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->checkGradeAndSign(executor);
		std::cout << executor.getName() << " executs " << this->getName() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << executor.getName() << " couldn't execute this form because: " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_target << " was forgiven by Zafod Beeblebrox" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	PresidentialPardonForm::getTarget() const
{
	return _target;
}

/* ************************************************************************** */