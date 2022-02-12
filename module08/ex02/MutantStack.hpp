#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>

template< typename T >
class MutantStack : public std::stack<T> {

	public :
		typedef typename MutantStack::container_type::iterator iterator;

		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack const & src) { *this = src; };
		~MutantStack() {};

		using std::stack<T>::operator=;
		
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
};

#endif