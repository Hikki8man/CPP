# include "MutantStack.hpp"

int main() {

	MutantStack<int> m;
	std::stack<int> s;

	m.push(12);
	m.push(1);
	s.push(12);
	s.push(1);

	std::cout << "stack: " << s.top() << std::endl;
	std::cout << "stack: " << m.top() << std::endl;


	return 0;
}