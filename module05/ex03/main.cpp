# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main(void)
{
	Bureaucrat jeff("Jeff", 1);
	Intern louis;

	Form *form = louis.makeForm("RobotomyRequestForm", "bender");
	
	if (form)
	{
		jeff.executeForm(*form);
		jeff.signForm(*form);
		jeff.executeForm(*form);
	}
}