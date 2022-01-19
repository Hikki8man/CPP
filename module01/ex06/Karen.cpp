#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

e_complains	Karen::getComplain(std::string const &level) const
{
	if (level == "DEBUG")
		return DEBUG;
	else if (level == "INFO")
		return INFO;
	else if (level == "WARNING")
		return WARNING;
	else if (level == "ERROR")
		return ERROR;
	else
		return OTHER;
}

void	Karen::complain(std::string const &level)
{
	e_complains complain = this->getComplain(level);

	switch (complain)
	{
		case DEBUG :
			this->debug();

		case INFO :
			this->info();

		case WARNING :
			this->warning();

		case ERROR :
			this->error();
			break ;

		case OTHER : std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
