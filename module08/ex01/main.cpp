#include "Span.hpp"
#include <ctime>

int main() {

	std::srand(time(NULL));

	Span span(5);

	span.addNumber(6);
	span.addNumber(3);
	span.addNumber(17);
	span.addNumber(9);
	span.addNumber(11);

	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;

	std::cout << "--------------------------------------------------" << std::endl;

	Span s(10000);

	s.generate(INT_MAX);

	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;

	std::cout << "--------------------------------------------------" << std::endl;

	Span sp(0);

	try {
		sp.addNumber(23);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	

	std::cout << "--------------------------------------------------" << std::endl;

	
	Span one(1);

	try {
		one.addNumber(23);
		one.longestSpan();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	

	std::cout << "--------------------------------------------------" << std::endl;

	Span gen(10);


	gen.generate(100);
	

	std::cout << gen.shortestSpan() << std::endl;
	std::cout << gen.longestSpan() << std::endl;

	// for (std::vector<int>::iterator it = gen.getVector().begin() ; it < gen.getVector().end(); it++)
	// 	std::cout << "nb: " << *it << std::endl;

	return 0;
}