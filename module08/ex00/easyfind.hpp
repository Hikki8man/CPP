#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <list>
# include <vector>

template < typename T >
typename T::iterator easyfind(T & container, int toFind) {

	typename T::iterator t = find(container.begin(), container.end(), toFind);
	if (t != container.end())
		return t;
	else
		throw(std::exception());
	
}

#endif /* ******************************************************** EASYFIND_H */