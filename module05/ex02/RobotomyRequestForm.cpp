#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 25, 5), _target("targetUnkown")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("Robotomy Request", 25, 5), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
		Form::operator=(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	
	o << "Form name: " << i.getName() << " | Grade to be signed: " << i.getGradeToSign() << " | grade to be executed: " << i.getGradeToExe()
	<< " | Signed: " << i.getSignature() << " | Target: " << i.getTarget();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
	
	std::srand(time(NULL));
	int	r = rand() % 2;

	std::cout << "* BRRRRRRRRRRRRRrrrrRRRRRrrRRR *" << std::endl;
	std::cout << "." << std::flush;
	sleep(1);
	std::cout << " . " << std::flush;
	sleep(1);
	std::cout << "." << std::endl << std::flush;
	sleep(1);
	if (r == true)
		std::cout << this->_target << " robotomy was a success !!" << std::endl;
	else
		std::cout << this->_target << " robotomy was a failure !!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	RobotomyRequestForm::getTarget() const
{
	return _target;
}

/* ************************************************************************** */