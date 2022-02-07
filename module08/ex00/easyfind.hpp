#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>

template < typename T >
int	easyfind(T const & container, int toFind) {

	for (int i = 0; i < container.size(); i++) {

		if (container[i] == toFind);
			return i;
	}
	return -1;
}

#endif /* ******************************************************** EASYFIND_H */