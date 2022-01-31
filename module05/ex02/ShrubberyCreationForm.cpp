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


ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
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

// std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
// {
// 	o << ;
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	outFile(this->_target + "_shrubbery");
	if (outFile.good() == false)
	{
		std::cout << "Error: Outfile problem occured" << std::endl;
		return ;
	}

	if (this->getSignature() == false)
	{
		std::cout << this->getName() << " is not signed !" << std::endl;
		return ;
	}

	if (executor.getGrade() > this->getGradeToExe())
		throw Bureaucrat::GradeTooLowException();

	std::string trees = "               ,@@@@@@@,\n\
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
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */