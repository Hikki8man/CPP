#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << "Str	address = " << &str << std::endl;
	std::cout << "StrPtr	address = " << strPtr << std::endl;
	std::cout << "StrRef	address = " << &strRef << std::endl;

	std::cout << std::endl << "----------------------------------------------" << std::endl;

	std::cout << "Str    = " << str << std::endl;
	std::cout << "StrPtr = " << *strPtr << std::endl;
	std::cout << "StrRef = " << strRef << std::endl;

	return 0;
}
