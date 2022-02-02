#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()  : Form("Shrubbery Creation", 145, 137), _target("targetUnkown")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("Shrubbery Creation", 145, 137), _target(target)
{
}


ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
		Form::operator=(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	
	o << "Form name: " << i.getName() << " | Grade to be signed: " << i.getGradeToSign() << " | grade to be executed: " << i.getGradeToExe()
	<< " | Signed: " << i.getSignature() << " | Target: " << i.getTarget();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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

	std::ofstream	outFile((this->_target + "_shrubbery").c_str());
	if (outFile.good() == false)
	{
		std::cout << "Error: Outfile problem occured" << std::endl;
		return ;
	}

	std::cout << executor.getName() << " executs " << this->getName() << "." << std::endl;

	std::string const trees = "               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";

	outFile << trees << std::endl;
	outFile.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ShrubberyCreationForm::getTarget() const
{
	return _target;
}

/* ************************************************************************** */