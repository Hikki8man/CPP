# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main(void)
{
	Bureaucrat mike("Mike", 100);
	Bureaucrat jeff("Jeff", 1);
	Intern louis;
	Form *form;


		form = louis.makeForm("RobotomyRequestForm", "bender");
		jeff.signForm(*form);
		jeff.executeForm(*form);
	

	std::cout << jeff << std::endl;

}