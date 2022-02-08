#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{
	typedef unsigned int uint;
	public:

		Span();
		Span(uint size);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void	addNumber(int n);
		uint	shortestSpan();
		uint	longestSpan();

	private:
		std::vector<int> _v;
		uint _size;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */