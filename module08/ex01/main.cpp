#include "Span.hpp"
#include <ctime>

int main() {

	Span span(10000000);
	std::srand(time(NULL));


	for (int i = 0; i < 10000000; i++) {
		span.addNumber(rand());
	}

	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;

	return 0;
}