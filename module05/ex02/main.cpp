# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat mike("Mike", 100);
	Bureaucrat jeff("Jeff", 1);

	Form *form = new PresidentialPardonForm("Bezos");

	std::cout << *form << std::endl;
	jeff.signForm(*form);

		PresidentialPardonForm c("se");
	PresidentialPardonForm f(c);

std::cout << f << std::endl;
	jeff.executeForm(*form);
	// mike.signForm(form);
	// std::cout << form << std::endl;
	// jeff.signForm(form);
	// std::cout << form << std::endl;

	std::cout << jeff << std::endl;

}