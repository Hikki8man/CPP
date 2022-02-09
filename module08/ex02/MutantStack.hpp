#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template< typename T >
class MutantStack : public std::stack<T> {

	public :
		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack const & src) { static_cast<void>(src); };
		~MutantStack() {};

};

#endif