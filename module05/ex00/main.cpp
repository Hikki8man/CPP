# include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat mike("Mike", 150);
	Bureaucrat jeff("Jeff", 1);

	try
	{
		mike.rankDown();
	}
	catch(std::exception & e)
	{
		std::cerr << mike.getName() << ": " << e.what() << std::endl;
	}

	std::cout << mike << std::endl;
	std::cout << jeff << std::endl;

	try 
	{
		Bureaucrat joe("Joe", 0);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << jeff << std::endl;

}