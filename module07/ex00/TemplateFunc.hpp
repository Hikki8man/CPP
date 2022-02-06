#ifndef TEMPLATEFUNC_HPP
#define TEMPLATEFUNC_HPP

///------------Swap Template------------
template < typename T >
void swap(T & a, T & b) {

	T tmp = a;
	a = b;
	b = tmp;
}

///------------Min Template------------
template < typename T >
T const & min(T const & a, T const & b) {

	return a < b ? a : b;
}

///------------Max Template------------
template < typename T >
T const & max(T const & a, T const & b) {

	return a > b ? a : b;
}

#endif