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

		try
		{
			form = louis.makeForm("RobotomyRequestFor", "bender");
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
			jeff.signForm(*form);
			jeff.executeForm(*form);
	

	std::cout << jeff << std::endl;

}