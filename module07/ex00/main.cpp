# include <iostream>
# include "TemplateFunc.hpp"


int main(void) {
	
	int a = 10;
	int b = 42;
	std::cout << "before swap: a: " << a << " | b: " << b << std::endl;
	::swap<int>(a, b);
	std::cout << "after swap: a: " << a << " | b: " << b << std::endl;
	
	std::cout << "Smaller value between " << a << " & " << b << " is " << ::min<int>(a, b) << std:: endl;

	std::cout << "Greatest value between " << a << " & " << b << " is " << ::max<int>(a, b) << std:: endl;

	std::string c = "Hello";
	std::string d = "World !";

	std::cout << "before swap: c: " << c << " | d: " << d << std::endl;
	::swap<std::string>(c, d);
	std::cout << "after swap: c: " << c << " | d: " << d << std::endl;

	std::cout << "min: " << ::min<std::string>(c, d) << std::endl;

	std::cout << "max: " << ::max<std::string>(c, d) << std::endl;




	
	return 0;
}