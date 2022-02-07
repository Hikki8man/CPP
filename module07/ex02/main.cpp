#include "Array.hpp"

int main() {

	Array<int> a(10);

	try
	{
		a[10] = 1;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	for (unsigned int i = 0; i < a.size(); i++) {
		a[i] = i + 1;
	}

	std::cout << "a: " << a << std::endl;

	Array<int> b(a);

	std::cout << "b: " << b << std::endl;

	b[0] = 42;

	std::cout << "b: " << b << std::endl;
	std::cout << "a: " << a << std::endl;
	
	Array<std::string> s(10);

	s[0] = "hello";
	s[1] = "world";
	s[2] = "!";

	std::cout << s << std::endl;

	return 0;
}