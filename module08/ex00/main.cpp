# include "easyfind.hpp"
# include <list>

int main(void) {

	std::list<int> list;

	for (int i = 0; i < 10; i ++) {

		list.push_back(i + 1);
	}

	for (int i(0); i < list.size(); i++) {
		std::cout << list[i] << std::endl;
	}

	return 0;
}