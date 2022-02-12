# include "MutantStack.hpp"
#include <list>

int main() {

	MutantStack<int> m;
	std::stack<int> s;
	MutantStack<int> mcpy(m);
	// std::vector<int> c;


	m.push(4);
	m.push(1);
	m.push(12);
	m.push(1);
	
	// Stack<int>::value_type r;
	// MutantStack<int>::iterator

	// std::cout << "stack: " << s.top() << std::endl;
	std::cout << "stack: " << m.top() << std::endl;

	
	MutantStack<int>::iterator ite = m.end();

	for (MutantStack<int>::iterator it = m.begin();  it != ite; it++)
		std::cout << *it << std::endl;


	MutantStack<int>::iterator itee = mcpy.end();

	for (MutantStack<int>::iterator it = mcpy.begin();  it != itee; it++)
		std::cout << *it << std::endl;

	// std::list<int> m;
	// std::stack<int> s;
	// // std::vector<int> c;


	// m.push_back(4);
	// m.push_back(1);
	// m.push_back(12);
	// m.push_back(1);
	
	// // Stack<int>::value_type r;
	// // MutantStack<int>::iterator

	// // std::cout << "stack: " << s.top() << std::endl;
	// // std::cout << "stack: " << m.top() << std::endl;

	
	// std::list<int>::iterator ite = m.end();

	// for (std::list<int>::iterator it = m.begin();  it != ite; it++)
	// 	std::cout << *it << std::endl;

	return 0;
}