# include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat mike("Mike", 0);
	Bureaucrat jeff("Jeff", 1);

	try
	{
		for (int i = 0; i < 200; i++)
			mike.rankDown();
	}
	catch(std::exception e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << mike << std::endl;
	std::cout << jeff << std::endl;

	try 
	{
		Bureaucrat jeff("Jeff", 0);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << jeff << std::endl;

}