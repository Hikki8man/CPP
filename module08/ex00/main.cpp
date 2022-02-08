# include "easyfind.hpp"

int main(void) {

	std::list<int> list;
	std::vector<int> vec;

	for (int i = 0; i < 10; i ++) {

		list.push_back(i + 1);
		vec.push_back((i * -1)  + 1);
	}

	int toFind = 2;

	try {
		std::list<int>::iterator found = easyfind(list, toFind);
		std::cout << "int: " << *found << " was found in the list" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "int: " << toFind << " was not found .." << std::endl;
	}

	try {
		std::vector<int>::iterator found = easyfind(vec, toFind);
		std::cout << "int: " << *found << " was found in the vector" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "int: " << toFind << " was not found .." << std::endl;
	}


	toFind = -1;
	try {
		std::list<int>::iterator found = easyfind(list, toFind);
		std::cout << "int: " << *found << " was found in the list" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "int: " << toFind << " was not found .." << std::endl;
	}

	try {
		std::vector<int>::iterator found = easyfind(vec, toFind);
		std::cout << "int: " << *found << " was found in the vector" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "int: " << toFind << " was not found .." << std::endl;
	}

	return 0;
}