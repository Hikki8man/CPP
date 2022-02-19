# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat mike("Mike", 100);
	Bureaucrat jeff("Jeff", 1);

	Form *form = new RobotomyRequestForm("Bezos");
	

	std::cout << *form << std::endl;
	jeff.signForm(*form);
	std::cout << *form << std::endl;
	mike.executeForm(*form);
	jeff.executeForm(*form);

	ShrubberyCreationForm trees("Forest");

	jeff.executeForm(trees);
	jeff.signForm(trees);
	jeff.executeForm(trees);



	delete form;
}