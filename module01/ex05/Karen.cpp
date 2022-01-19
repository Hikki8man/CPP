#include "Karen.hpp"

Karen::Karen()
{
	this->f[0] = &Karen::debug;
	this->f[1] = &Karen::info;
	this->f[2] = &Karen::warning;
	this->f[3] = &Karen::error;
}

Karen::~Karen()
{
}


std::string const Karen::tab[4] = {

	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

void	Karen::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == this->tab[i])
			(this->*f[i])();
	}
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
