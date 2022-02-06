#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T>
void print(T & toPrint) {
	std::cout << toPrint << " ";
}

template <typename T>
void iter(T *tab, size_t const & size, void (*f)(T & var)) {
	
	for (size_t i = 0; i < size; i++) {
		f(tab[i]);
	}
}

#endif