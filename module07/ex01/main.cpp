# include "iter.hpp"

int main(void) {

	int a[10] = {1, 2, 3, 4 ,5 , 6, 7, 8, 9, 10};

	iter(a, 10, print);

	std::string strT[] = {"Hello", "World", "!"};

	std::cout << std::endl;

	iter<std::string>(strT, 3, print);

	std::cout << std::endl;

	return 0;
}