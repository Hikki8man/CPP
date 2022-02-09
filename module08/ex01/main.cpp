#include "Span.hpp"
#include <ctime>

int main() {

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

	s.generate();

	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;

	std::cout << "--------------------------------------------------" << std::endl;

	{
		Span sp(0);

		try {
			sp.addNumber(23);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------------------" << std::endl;
	{
		Span sp(1);

		try {
			sp.addNumber(23);
			sp.longestSpan();
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}