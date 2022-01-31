# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat mike("Mike", 138);
	Bureaucrat jeff("Jeff", 1);

	Form *form = new ShrubberyCreationForm("maison");

	std::cout << *form << std::endl;
	mike.signForm(*form);

	// mike.signForm(form);
	// std::cout << form << std::endl;
	// jeff.signForm(form);
	// std::cout << form << std::endl;

	std::cout << jeff << std::endl;

}