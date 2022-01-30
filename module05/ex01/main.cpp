# include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat mike("Mike", 100);
	Bureaucrat jeff("Jeff", 1);

	Form form("paperasse", 50, 10);

	mike.signForm(form);
	std::cout << form << std::endl;
	jeff.signForm(form);
	std::cout << form << std::endl;

	std::cout << jeff << std::endl;

}