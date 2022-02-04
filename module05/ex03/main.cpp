# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main(void)
{
	Bureaucrat jeff("Jeff", 1);
	Intern louis;

	Form *form = louis.makeForm("Robotomy request", "bender");
	
	if (form)
	{
		form->execute(jeff);
		jeff.executeForm(*form);
		jeff.signForm(*form);
		jeff.executeForm(*form);
	}

	delete form;
}